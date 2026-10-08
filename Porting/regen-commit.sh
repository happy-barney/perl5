#!/usr/bin/env bash

set -euo pipefail

# 1. Regenerate the files
echo "==> Regenerating Perl files..."
make regen
make regen_perly

# 2. Compile and run test_harness
echo "==> Compiling and running tests..."
make -j$(nproc)
make test_harness

# 3. Target explicitly listed generated files
GENERATED_FILES=(
    perly.act
    perly.h
    perly.tab
    embed.h
    embedvar.h
    proto.h
    embed.fnc
)

# Filter the list to files that actually have changes
REGENERATED_FILES=()
for file in "${GENERATED_FILES[@]}"; do
    if [ -f "$file" ] && ! git diff --quiet -- "$file"; then
        REGENERATED_FILES+=("$file")
    fi
done

# 4. Add all files at once and amend the commit if changes exist
if [ ${#REGENERATED_FILES[@]} -ne 0 ]; then
    echo "==> Found changes in generated files. Staging and amending..."

    # Properly expands the array elements into individual arguments
    git add "${REGENERATED_FILES[@]}"
fi

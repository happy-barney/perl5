#!/usr/bin/env bash

set -euo pipefail

git rebase -i "${1:blead}" -x "$(dirname "${BASH_SOURCE[0]}")/perl-regen-commit.sh"


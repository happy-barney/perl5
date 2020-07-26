#!/bin/bash

script_path=$( dirname "${BASH_SOURCE[0]}" )

docker build --tag p5p-bison/v3.3.2 --file ${script_path}/Dockerfile.bison ${script_path}

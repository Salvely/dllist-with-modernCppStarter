#!/bin/sh
clang-format -i ./*/*/*.h -style=file
clang-format -i ./*/*.cpp -style=file
clang-format -i ./*/*/*.cpp -style=file

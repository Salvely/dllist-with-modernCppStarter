# # Build and run the standalone target
# cmake -S standalone -B build/standalone
# cmake --build build/standalone
# ./build/standalone/Greeter --help

# # Build and run test suite
# cmake -S test -B build/test
# cmake --build build/test
# CTEST_OUTPUT_ON_FAILURE=1 cmake --build build/test --target test

# or simply call the executable:
# ./build/test/GreeterTests

# install clang-format and pyyaml
# pip install clang-format==14.0.6 cmake_format==0.6.11 pyyaml

# Run clang-format
# cmake -S test -B build/test

# # view changes
# cmake --build build/test --target format

# # apply changes
# cmake --build build/test --target fix-format

# Build the documentation
# cmake -S documentation -B build/doc
# cmake --build build/doc --target GenerateDocs
# view the docs
# open build/doc/doxygen/html/index.html

# run tests
# ./build/test/GreeterTests
# format code
# cmake --build build --target fix-format
# run standalone
# ./build/standalone/Greeter --help
# build docs
# cmake --build build --target GenerateDocs

# build everything at one
cmake -G "MinGW Makefiles" -S all -B build
cmake --build build

# make each target
cd build
./build/standalone/Greeter --help
make standalone
CTEST_OUTPUT_ON_FAILURE=1 cmake --build build/test --target test
make test
./build/test/GreeterTests
pip install clang-format==14.0.6 cmake_format==0.6.11 pyyaml
make format
make fix-format
make doxygen
open build/doc/doxygen/html/index.html

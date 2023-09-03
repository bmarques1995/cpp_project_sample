cmake -S ./modules/cpp_standalone_lib -B ./dependencies/cpp_standalone_lib -DCMAKE_INSTALL_PREFIX="./install"
cmake --build ./dependencies/cpp_standalone_lib --config Release --target install
# CMakeLists.txt has to be located in the project folder and cmake has to be
# executed from 'project/build' with 'cmake ../'.
cmake_minimum_required(VERSION 3.1)
project(deps_target_dependency
        VERSION 0.1
        DESCRIPTION "Dependency for the build_tests/cmake/deps_target")
find_package(Rock)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

rock_init()
rock_standard_layout()

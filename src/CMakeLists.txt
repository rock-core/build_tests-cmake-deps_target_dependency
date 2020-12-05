find_package(PkgConfig REQUIRED)
pkg_check_modules(deps_target_transitive_dependency deps_target_transitive_dependency)

find_library(deps_target_transitive_dependency_LIB deps_target_transitive_dependency
    HINTS ${deps_target_transitive_dependency_LIBRARY_DIRS})

rock_library(deps_target_dependency
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp
    LIBS ${deps_target_transitive_dependency_LIB})

target_include_directories(deps_target_dependency INTERFACE ${CMAKE_INSTALL_PREFIX}/include)
target_include_directories(deps_target_dependency INTERFACE ${deps_target_transitive_dependency_INCLUDE_DIRS})

export(TARGETS deps_target_dependency FILE deps_target_dependency-config.cmake)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/deps_target_dependency-config.cmake
        DESTINATION lib/cmake/deps_target_dependency)

rock_executable(deps_target_dependency_bin Main.cpp
    DEPS deps_target_dependency)


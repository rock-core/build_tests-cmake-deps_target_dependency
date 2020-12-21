find_package(PkgConfig REQUIRED)
pkg_check_modules(deps_target_transitive_dependency_pkgconfig
                  REQUIRED deps_target_transitive_dependency_pkgconfig)
find_library(deps_target_transitive_dependency_pkgconfig_LIB
    deps_target_transitive_dependency_pkgconfig
    HINTS ${deps_target_transitive_dependency_pkgconfig_LIBRARY_DIRS})


find_package(deps_target_transitive_dependency REQUIRED)

rock_library(deps_target_dependency
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp
    LIBS ${deps_target_transitive_dependency_pkgconfig_LIB}
    EXPORT dep)

target_include_directories(deps_target_dependency INTERFACE ${CMAKE_INSTALL_PREFIX}/include)
target_include_directories(deps_target_dependency INTERFACE ${deps_target_transitive_dependency_pkgconfig_INCLUDE_DIRS})

target_link_libraries(
    deps_target_dependency
    deps_target_transitive_dependency::deps_target_transitive_dependency_cmake)

install(EXPORT dep
        NAMESPACE deps_target_dependency::
        DESTINATION lib/cmake/deps_target_dependency)
install(FILES deps_target_dependency-config.cmake
        DESTINATION lib/cmake/deps_target_dependency)

rock_executable(deps_target_dependency_bin Main.cpp
    DEPS deps_target_dependency)

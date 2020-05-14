rock_library(deps_target_dependency
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)
target_include_directories(deps_target_dependency INTERFACE ${CMAKE_INSTALL_PREFIX}/include)

export(TARGETS deps_target_dependency FILE deps_target_dependency-config.cmake)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/deps_target_dependency-config.cmake
        DESTINATION lib/cmake/deps_target_dependency)

rock_executable(deps_target_dependency_bin Main.cpp
    DEPS deps_target_dependency)


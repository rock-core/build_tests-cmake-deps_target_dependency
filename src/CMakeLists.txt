rock_library(deps_target_dependency
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(deps_target_dependency_bin Main.cpp
    DEPS deps_target_dependency)


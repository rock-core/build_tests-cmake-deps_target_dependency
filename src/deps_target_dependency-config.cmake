find_package(deps_target_transitive_dependency REQUIRED)

get_filename_component(SELF_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
include(${SELF_DIR}/dep.cmake)

Part of the Rock integration tests

This package is part of a set of three that tests
[base/cmake](https://github.com/rock-core/base-cmake) `DEPS_TARGET`
functionality.

This package (`deps_target_dependency`) exports a CMake target. This exported
target is then imported by
[`deps_target`](https://github.com/rock-core/build_tests-cmake-deps_target)
using the `DEPS_TARGET` flag from Rock's `base/cmake` macros.
`deps_target_use_pkgconfig` then tries to use the result as a pkg-config
dependency.


If it builds, it works

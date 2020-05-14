#include <boost/test/unit_test.hpp>
#include <deps_target_dependency/Dummy.hpp>

using namespace deps_target_dependency;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    deps_target_dependency::DummyClass dummy;
    dummy.welcome();
}

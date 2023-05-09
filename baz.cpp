#include "baz.hpp"
#include <string_view>
#include <string>
static constexpr std::string_view Baz = "bazbaz";
auto call_baz() -> std::string { return std::string(Baz); }

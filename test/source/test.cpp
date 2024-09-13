#include <dllist/dllist.h>
#include <dllist/version.h>
#include <doctest/doctest.h>

#include <string>

TEST_CASE("Dllist") {
  using namespace dllist;

  Dllist dllist("Tests");

  CHECK(dllist.greet(LanguageCode::EN) == "Hello, Tests!");
  CHECK(dllist.greet(LanguageCode::DE) == "Hallo Tests!");
  CHECK(dllist.greet(LanguageCode::ES) == "¡Hola Tests!");
  CHECK(dllist.greet(LanguageCode::FR) == "Bonjour Tests!");
}

TEST_CASE("Dllist version") {
  static_assert(std::string_view(DLLIST_VERSION) == std::string_view("1.0"));
  CHECK(std::string(DLLIST_VERSION) == std::string("1.0"));
}
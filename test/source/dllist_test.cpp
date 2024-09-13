#include "static/dllist.hpp"

#include <doctest/doctest.h>
#include <stdbool.h>

TEST_CASE("Initialization test") {
  dllist<int> dllist;
  INFO("initiliaze a new dllist");
  // assert that the head is NULL
  REQUIRE(dllist.get_head(), NULL);
  // assert that the size = 0
  SUBCASE("size test") { REQUIRE(dllist.get_size(), 0); }
  // assert that empty() returns true
  SUBCASE("empty test") { REQUIRE(dllist.empty(), true); }
  // print list
  INFO("The dllist: ");
  dllist.print_list();
}

TEST_CASE("insert front and delet front test") {
  dllist<int> dllist;
  // insert 5 numbers to the list at the front
  // assert that the size = 5
  // assert that empty() returns false
  // print list

  // delete from the front
  // insert 5 items
  // delete from the front
}

TEST_CASE("insert back and delete back test") {
  dllist<int> dllist;
  // insert 5 numbers to the list at the back
  // assert that the size = 5
  // assert that empty() returns false
  // print list
}

TEST_CASE("insert item and delete item test") {
  dllist<int> dllist;
  // insert at the front
}

TEST_CASE("modify test") { dllist<int> dllist; }

TEST_CASE("integration test") { dllist<int> dllist; }

TEST_CASE("Destructor test") {
  dllist<int> dllist;
  INFO("initiliaze a new dllist");
  // assert that the head is NULL
  // assert that the size = 0
  // assert that empty() returns true
}
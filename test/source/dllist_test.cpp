#include "static/dllist.hpp"

#include <doctest/doctest.h>
#include <stdbool.h>

TEST_CASE("Initialization test") {
  dllist<int> dllist;
  MESSAGE("initiliaze a new dllist");
  // assert that the head is nullptr
  REQUIRE(dllist.get_head() == nullptr);
  // assert that the size = 0
  REQUIRE(dllist.get_size() == 0);
  // assert that empty() returns true
  REQUIRE(dllist.empty() == true);
  // print list
  MESSAGE("The dllist: ");
  dllist.print_list();
}

TEST_SUITE("insert front and delete front test") {
  dllist<int> dllist;

  MESSAGE("insert 5 numbers to the list at the front");
  for (int i = 0; i < 5; i++) {
    dllist.insert_front(i);
  }
  MESSAGE("assert that the size = 5");
  REQUIRE(dllist.get_size() == 5);
  MESSAGE("assert that empty() returns false");
  REQUIRE(dllist.empty() == false);

  MESSAGE("dllist: ");
  dllist.print_list();

  REQUIRE(dllist.empty() == false);
  MESSAGE("delete from the front");
  for (int i = 0; i < 5; i++) {
    int val = dllist.delete_front();
    MESSAGE("deleted ", val);
  }
  MESSAGE("assert that the size = 0");
  REQUIRE(dllist.get_size() == 0);
  MESSAGE("assert that empty() returns true");
  REQUIRE(dllist.empty() == true);
  MESSAGE("dllist: ");
  dllist.print_list();
}

TEST_CASE("modify test") { dllist<int> dllist; }

TEST_CASE("insert back and delete back test") {
  dllist<int> dllist;
  // MESSAGE("insert 5 numbers to the list at the back");
  // MESSAGE("assert that the size = 5");
  // MESSAGE("assert that empty() returns false");
  // MESSAGE("dllist: ");
}

TEST_CASE("insert item and delete item test") {
  dllist<int> dllist;
  // insert at the front
}

TEST_CASE("Destructor test") {
  dllist<int> dllist;
  MESSAGE("initiliaze a new dllist");
  // assert that the head is nullptr
  // assert that the size = 0
  // assert that empty() returns true
}
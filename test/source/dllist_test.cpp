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
  INFO("insert 5 numbers to the list at the front");
  for (int i = 0; i < 5; i++) {
    dllist.insert_front(i);
  }
  INFO("assert that the size = 5");
  REQUIRE(dllist.size(), 5);
  INFO("assert that empty() returns false");
  REQUIRE(dllist.empty(), false);
  INFO("dllist: ");
  dllist.print_list();

  INFO("delete from the front");
  for (int i = 0; i < 5; i++) {
    dllist.delete_front();
    INFO("dllist after deleting front: ");
    dllist.print_list();
  }
  INFO("assert that the size = 0");
  REQUIRE(dllist.size(), 0);
  INFO("assert that empty() returns true");
  REQUIRE(dllist.empty(), true);
  INFO("dllist: ");
  dllist.print_list();
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
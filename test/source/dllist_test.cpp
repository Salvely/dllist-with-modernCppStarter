#include "static/dllist.hpp"

#include <doctest/doctest.h>
#include <stdbool.h>

TEST_CASE("Initialization test") {
  dllist<int> dllist;
  INFO("initiliaze a new dllist");
  // assert that the head is nullptr
  REQUIRE(dllist.get_head() == nullptr);
  // assert that the size = 0
  REQUIRE(dllist.get_size() == 0);
  // assert that empty() returns true
  REQUIRE(dllist.empty() == true);
  // print list
  INFO("The dllist: ");
  dllist.print_list();
}

TEST_SUITE("insert front and delete front test") {
  dllist<int> dllist;

  // SUBCASE("test insert front") {
  INFO("insert 5 numbers to the list at the front");
  for (int i = 0; i < 5; i++) {
    dllist.insert_front(i);
  }
  INFO("assert that the size = 5");
  REQUIRE(dllist.get_size() == 5);
  INFO("assert that empty() returns false");
  REQUIRE(dllist.empty() == false);
  // }

  INFO("dllist: ");
  dllist.print_list();

  // SUBCASE("test delete front") {
  REQUIRE(dllist.empty() == false);
  INFO("delete from the front");
  for (int i = 0; i < 5; i++) {
    int val = dllist.delete_front();
    INFO("deleted ", val);
  }
  INFO("assert that the size = 0");
  REQUIRE(dllist.get_size() == 0);
  INFO("assert that empty() returns true");
  REQUIRE(dllist.empty() == true);
  INFO("dllist: ");
  dllist.print_list();
  // }
}

TEST_CASE("insert back and delete back test") {
  dllist<int> dllist;
  // INFO("insert 5 numbers to the list at the back");
  // INFO("assert that the size = 5");
  // INFO("assert that empty() returns false");
  // INFO("dllist: ");
}

TEST_CASE("insert item and delete item test") {
  dllist<int> dllist;
  // insert at the front
}

TEST_CASE("modify test") { dllist<int> dllist; }

TEST_CASE("Destructor test") {
  dllist<int> dllist;
  INFO("initiliaze a new dllist");
  // assert that the head is nullptr
  // assert that the size = 0
  // assert that empty() returns true
}
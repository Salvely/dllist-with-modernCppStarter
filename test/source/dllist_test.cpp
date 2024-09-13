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

TEST_CASE("insert front and delete front test") {
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

  MESSAGE("test modify: ");
  for (int i = 0; i < 5; i++) {
    dllist.modify(i, i + 10);
  }

  MESSAGE("dllist: ");
  dllist.print_list();

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

  MESSAGE("Destruct the dllist");
  dllist.~dllist();
  CHECK(dllist.get_size() == 0);
  CHECK(dllist.empty() == true);
}

TEST_CASE("insert back and delete back test") {
  dllist<int> dllist;

  MESSAGE("insert 5 numbers to the list at the back");
  for (int i = 0; i < 5; i++) {
    dllist.insert_back(i);
  }
  MESSAGE("assert that the size = 5");
  REQUIRE(dllist.get_size() == 5);
  MESSAGE("assert that empty() returns false");
  REQUIRE(dllist.empty() == false);

  MESSAGE("dllist: ");
  dllist.print_list();

  MESSAGE("test modify: ");
  for (int i = 0; i < 5; i++) {
    dllist.modify(i, i + 10);
  }

  MESSAGE("dllist: ");
  dllist.print_list();

  MESSAGE("delete from the back");
  for (int i = 0; i < 5; i++) {
    int val = dllist.delete_back();
    MESSAGE("deleted ", val);
  }
  MESSAGE("assert that the size = 0");
  REQUIRE(dllist.get_size() == 0);
  MESSAGE("assert that empty() returns true");
  REQUIRE(dllist.empty() == true);
  MESSAGE("dllist: ");
  dllist.print_list();

  MESSAGE("Destruct the dllist");
  dllist.~dllist();
  CHECK(dllist.get_size() == 0);
  CHECK(dllist.empty() == true);
}

TEST_CASE("insert item and delete item test") {
  dllist<int> dllist;
  MESSAGE("Insert 0,1,2,3,4 to the list");
  for (int i = 0; i < 5; i++) {
    dllist.insert_item(i, i);
  }
  dllist.print_list();
  MESSAGE("Delete 0,1,2,3,4 from the list");
  for (int i = 0; i < 5; i++) {
    int val = dllist.delete_item(0);
    CHECK(val == i);
  }
}

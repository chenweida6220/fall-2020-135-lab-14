#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "MyVector.h"

// string vector
TEST_CASE("size()") {
  MyVector<string> strVec;
  CHECK(strVec.size() == 0);

  MyVector<string> intVec{1};
  CHECK(intVec.size() == 1);
}

TEST_CASE("capacity()") {
  MyVector<string> strVec;
  CHECK(strVec.capacity() == 10);

  MyVector<string> intVec{100};
  CHECK(intVec.capacity() == 110);
}

TEST_CASE("empty()") {
  MyVector<string> strVec;
  CHECK(strVec.empty() == true);

  MyVector<string> intVec{100};
  CHECK(intVec.empty() == false);

  MyVector<string> strVec2;
  strVec2.push_back("hello");
  CHECK(intVec.empty() == false);
}

TEST_CASE("push_back(T item)") {
  MyVector<string> strVec;
  strVec.push_back("hello");
  strVec.push_back(" ");
  strVec.push_back("world!");
  CHECK(strVec.size() == 3);

  string str;
  for (int i = 0; i < strVec.size(); i++) {
    str += strVec[i];
  }
  CHECK((strVec[0] + strVec[1] + strVec[2]) == str);
}

TEST_CASE("pop_back(int n)/pop_back()") {
  MyVector<string> strVec;
  strVec.push_back("hello");
  strVec.push_back(" ");
  strVec.push_back("world!");

  strVec.pop_back();
  CHECK(strVec.size() == 2);
  CHECK((strVec[0] + strVec[1]) == "hello ");

  strVec.pop_back(0);
  CHECK(strVec.size() == 1);
  CHECK((strVec[1]) == "");
}

TEST_CASE("clear()") {
  MyVector<string> strVec;
  strVec.push_back("hello");
  strVec.push_back(" ");
  strVec.push_back("world!");

  strVec.clear();
  CHECK(strVec.size() == 0);
  CHECK(strVec.capacity() == 10);
  CHECK(strVec.empty() == true);
}

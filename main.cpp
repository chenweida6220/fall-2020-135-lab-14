#include <iostream>
using namespace std;

#include "MyVector.h"

int main() {
  // integer vector
  MyVector<int> vec;
  cout << "Size: " << vec.size() << endl;
  cout << "Capacity: " << vec.capacity() << endl;
  cout << "Empty: " << vec.empty() << endl;

  cout << endl;

  vec.push_back(0);
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  cout << "Size: " << vec.size() << endl;
  cout << "Capacity: " << vec.capacity() << endl;
  cout << "Empty: " << vec.empty() << endl;
  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }
  cout << endl;

  cout << endl;

  vec.pop_back(1);
  cout << "Pop_back Index 1" << endl;
  cout << "Size: " << vec.size() << endl;
  cout << "Capacity: " << vec.capacity() << endl;
  cout << "Empty: " << vec.empty() << endl;
  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }
  cout << endl;

  cout << endl;

  vec.pop_back();
  cout << "Pop_back" << endl;
  cout << "Size: " << vec.size() << endl;
  cout << "Capacity: " << vec.capacity() << endl;
  cout << "Empty: " << vec.empty() << endl;
  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }
  cout << endl;

  cout << endl;

  cout << "Clear-> " << endl;
  vec.clear();
  cout << "Size: " << vec.size() << endl;
  cout << "Capacity: " << vec.capacity() << endl;
  cout << "Empty: " << vec.empty() << endl;
  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }
  cout << endl;
}

#pragma once

template<class T>
class MyVector {
public:
  MyVector();
  MyVector(int size);
  int size();
  int capacity();
  bool empty();
  void push_back(T item);
  void pop_back(int n);
  void pop_back();
  void clear();
  T operator[] (int x);

private:
  int currentSize = 0;
  int maxSize = 10;
  T* myVec = new T[maxSize];
};

#include "MyVector.cxx"

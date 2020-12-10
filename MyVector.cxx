#include <iostream>
using namespace std;

#include "MyVector.h"

template<class T>
MyVector<T>::MyVector() {
  currentSize = 0;
  maxSize = 10;
}

template<class T>
MyVector<T>::MyVector(int size) {
  currentSize = size;
  if (size > maxSize) {
    maxSize = size;
    myVec = new T[size];
  }
}

template<class T>
int MyVector<T>::size() {
  return currentSize;
}

template <class T>
int MyVector<T>::capacity() {
  return maxSize;
}

template<class T>
bool MyVector<T>::empty() {
  return (currentSize == 0);
}

template<class T>
void MyVector<T>::push_back(T item) {
  currentSize += 1;
	if (currentSize > maxSize) {
		maxSize = currentSize;
	}
	myVec[currentSize - 1] = item;
}

template<class T>
void MyVector<T>::pop_back(int n) {
  for (int i = n; i < currentSize; i++){
    myVec[i] = myVec[i + 1];
  }
  currentSize--;
}

template<class T>
void MyVector<T>::pop_back() {
  pop_back(1);
}

template<class T>
void MyVector<T>::clear() {
  currentSize = 0;
  maxSize = 10;
  T* tempVec = new T[maxSize];
  myVec = tempVec;
}

template<class T>
T MyVector<T>::operator[] (int x) {
	return myVec[x];
}

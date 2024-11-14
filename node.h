/*
Henry Xu
C++
11/13/24
Node.h
*/
#ifndef NODE_H
#define NODE_H

#include <iostream>
#include "student.h"

using namespace std;

class Node{
 public:
  Node(Student* nstudent);
  ~Node();
  Student* getstudent();
  void setNext(Node* newnode);
  Node* getNext();
 private:
  Student* student;
  Node* nextnode;
};
#endif
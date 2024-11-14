/*
Henry Xu
C++
11/13/24
Node.h
*/
#include <iostream>
#include "student.h"

using namespace std;

class Student;

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

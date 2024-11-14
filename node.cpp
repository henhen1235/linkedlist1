/*
Henry Xu
C++
11/13/24
Node.cpp
*/
#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

Node::Node(Student* nstudent) {
  student = nstudent;
}

Node::~Node(){
  if(student != NULL) {
    delete student;  // Delete the Student object
    student = NULL;
  }
  nextnode = NULL;
}

Student* Node::getstudent(){
  if(student != NULL){
    return student;
  }
  else{
    return NULL;
  }
}

void Node::setNext(Node* newnode){
  nextnode = newnode; //setting the next node up!
}

Node* Node::getNext(){
  return nextnode;//returning the node!
}

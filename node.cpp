#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

Node::Node(Student* nstudent) {
  student = nstudent;
}

Node::~Node(){
  student = NULL;
  nextnode = NULL;
}

student* Node::getstudent(){
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

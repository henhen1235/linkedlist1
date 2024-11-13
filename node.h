#include <iostream>

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

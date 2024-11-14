/*
Henry Xu
C++
11/13/24
Testing the Node.h + Node.cpp files to ensure they work.
*/
#include <iostream>
#include <cstring>
#include "student.h"
#include "node.h"

using namespace std;

int main(){
  //creating Students
  char Fname1[20] = "Bob";
  char Fname2[20] = "Fred";
  char Lname1[20] = "Wright";
  char Lname2[20] = "Fleet";

  Student* student1 = new Student;
  student1->makestudent(Fname1, Lname1, 111111, 4.5);
  Student* student2 = new Student;
  student2->makestudent(Fname2, Lname2, 222222, 0.9);

  //Testing for constructor
  Node* node1 = new Node(student1);
  Node* node2 = new Node(student2);

  //Testing for get student
  Student* getstudent1 = node1->getstudent();
  Student* getstudent2 = node2->getstudent();

  cout << "Output after getting student from node" << endl;
  cout << getstudent1->getfirst() << endl;
  cout << getstudent1->getlast() << endl;
  cout << getstudent1->getID() << endl;
  cout << getstudent1->getGPA() << endl;

  cout << getstudent2->getfirst() << endl;
  cout << getstudent2->getlast() << endl;
  cout << getstudent2->getID() << endl;
  cout << getstudent2->getGPA() << endl;


  //setting next node
  node1->setNext(node2);

  //getting next node
  Node* nextnode = node1->getNext();
  Student* Nnodestudent = nextnode->getstudent();

  //getting student informoation from the node before it!
  cout << Nnodestudent->getfirst() << endl;
  cout << Nnodestudent->getlast() << endl;
  cout << Nnodestudent->getID() << endl;
  cout << Nnodestudent->getGPA() << endl;

  //testing destructors
  delete node2; 
  delete node1;
  delete student1;
  delete student2;

  cout << "Program completed successfully" << endl;

  return 0;
}

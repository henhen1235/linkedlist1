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
  char Fname1[10];
  strcpy(Fname1, "Bob");
  char Fname2[10];
  strcpy(Fname2, "Fred");
  char Lname1[10];
  strcpy(Lname1, "Wright");
  char Lname2[10];
  strcpy(Lname2, "Fleet");

  Student* student1 = new Student;
  student1->makestudent(Fname1, Lname1, 111111, 4.5);
  Student* student2 = new Student;
  student2->makestudent(Fname2, Lname2, 222222, 0.9);

  //Testing for 


  
  return 0;
}

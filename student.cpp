/*
Henry Xu
C++
11/13/24
student.cpp
*/
#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

Student::Student(){
  first = new char[50];
}

Student::~Student(){
  delete[] first;
  delete[] last;
}

void Student::makestudent(char* nfirst, char* nlast, int nID, float NGPA){
  delete[] first;
  first = new char[50];
  strcpy(first, nfirst);
  delete[] last;
  last = new char[50];
  strcpy(last, nlast);
  ID = nID;
  GPA = NGPA;
}

char* Student::getfirst(){
  return first;
}
char* Student::getlast(){
  return last;
}
int Student::getID(){
  return ID;
}
float Student::getGPA(){
  return GPA;
}

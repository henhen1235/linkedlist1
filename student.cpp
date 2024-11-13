#include <iostream>

using namespace std;

Student::Student(){
  first = new char[50];
}

Student::~student(){
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
  Id = nID;
  GPA = NGPA;
}

char* Student::getfirst(){
  return first;
}
char* Student::getlast(){
  return last;
}
int Student::getID()
  return ID;
}
float Student::getGPA(){
  return GPA;
}

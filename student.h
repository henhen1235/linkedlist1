#include <iostream>

using namespace std;

class Student{
 public:
  Student();
  ~Student();
  void makestudent(char* nfirst, char* nlast, int nID, float NGPA);
  char* getfirst();
  char* getlast();
  int getID();
  float getGPA();
 private:
  char* first;
  char* last;
  int ID;
  float GPA;
};

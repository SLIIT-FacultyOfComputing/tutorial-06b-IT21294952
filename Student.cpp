#include "Student.h"
#include <iostream>

// Assign studentId and name
void Student::assignDetails(int id, char sname[]) {
  strcpy(name, sname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"----------------------"<<endl;
  cout<<"The Student ID: "<<endl;
  cout<<"The name of the student: "<<endl;
}

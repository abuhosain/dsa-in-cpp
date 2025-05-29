#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  int roll;
  int cls;
  double gpa;

  Student(int roll, int cls, double gpa)
  {
    this->roll = roll;
    this->cls = cls;
    this->gpa = gpa;
  };
};

Student* func() {
  Student* karim = new Student(102, 11, 3.85);
  return karim;
};

int main()
{
  Student rahim(101, 10, 3.75);
  Student* p =  func();
  cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
  cout << (*p).roll << " " << (*p).cls << " " << (*p).gpa << endl;
  return 0;
};
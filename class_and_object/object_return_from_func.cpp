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

Student func() {
  Student karim(102, 11, 3.85);
  return karim;
};

int main()
{
  Student rahim(101, 10, 3.75);
  Student obj =  func();
  cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
  cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
  return 0;
};
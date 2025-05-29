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

int main()
{
  Student rahim(101, 10, 3.75);
  Student *karim =  new Student(102, 11, 3.85);
  cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
  cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;
};
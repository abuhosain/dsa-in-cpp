#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  int roll;
  int cls;
  double gpa;

  Student(int r, int c, double g)
  {
    roll = r;
    cls = c;
    gpa = g;
  };
};

int main()
{
 Student rahim(101, 10, 3.75);

  cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
  return 0;
};
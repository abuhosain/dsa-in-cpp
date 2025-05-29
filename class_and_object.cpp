#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  char name[100];
  int roll;
  double gpa;
};

int main()
{
  Student a;
  char temp[100] = "Abu Hosain";
  strcpy(a.name, temp);
  a.roll = 101;
  a.gpa = 3.75;

  cout << a.name << " " << a.roll << " " << a.gpa << endl;
  return 0;
};
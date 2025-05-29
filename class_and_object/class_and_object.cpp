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
  Student a, b;
  cin.getline(a.name, 100);
  cin >>   a.roll >> a.gpa;
 

  cout << a.name << " " << a.roll << " " << a.gpa << endl; 
  return 0;
};
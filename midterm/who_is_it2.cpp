#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  int id;
  char name[100];
  char section;
  int marks;

  Student(int id, const char name[], char section, int marks)
  {
    this->id = id;
    strcpy(this->name, name);
    this->section = section;
    this->marks = marks;
  }

  Student()
  {
    id = 0;
    name[0] = '\0';
    section = 'A';
    marks = -1;
  }

  void print()
  {
    cout << id << " " << name << " " << section << " " << marks << endl;
  }
};

int main()
{
  int T;
  cin >> T;

  while (T--)
  {
    Student best;

    for (int i = 0; i < 3; i++)
    {
      int id, marks;
      char name[100];
      char section;
      cin >> id >> name >> section >> marks;

      Student s(id, name, section, marks);

      if (s.marks > best.marks || (s.marks == best.marks && s.id < best.id))
      {
        best = s;
      }
    }

    best.print();
  }

  return 0;
}

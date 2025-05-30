#include <iostream>
using namespace std;

class Student
{
public:
  int id;
  string name;
  char section;
  int marks;

  Student(int id, string name, char section, int marks)
  {
    this->id = id;
    this->name = name;
    this->section = section;
    this->marks = marks;
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
    Student best(0, "", 'A', -1);

    for (int i = 0; i < 3; i++)
    {
      int id, marks;
      string name;
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

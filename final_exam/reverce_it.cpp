#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  string nm;
  int cls;
  char s;
  int id;

  Student() {}

  Student(string name, int c, char section, int student_id)
  {
    nm = name;
    cls = c;
    s = section;
    id = student_id;
  }
};

int main()
{
  int N;
  cin >> N;

  Student students[100];

  for (int i = 0; i < N; i++)
  {
    string name;
    int c;
    char section;
    int student_id;

    cin >> name >> c >> section >> student_id;
    students[i] = Student(name, c, section, student_id);
  }

  for (int i = 0; i < N / 2; i++)
  {
    char temp = students[i].s;
    students[i].s = students[N - 1 - i].s;
    students[N - 1 - i].s = temp;
  }

  for (int i = 0; i < N; i++)
  {
    cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << "\n";
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  string nm;
  int cls;
  char s;
  int id;
  int math_marks;
  int eng_marks;
};

bool cmp(Student a, Student b)
{
  int total_a = a.math_marks + a.eng_marks;
  int total_b = b.math_marks + b.eng_marks;

  if (total_a != total_b)
  {
    return total_a > total_b;
  }
  else
  {
    return a.id < b.id;
  }
}

int main()
{
  int n;
  cin >> n;

  Student a[100];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
  }

  sort(a, a + n, cmp);

  for (int i = 0; i < n; i++)
  {
    cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << "\n";
  }

  return 0;
}

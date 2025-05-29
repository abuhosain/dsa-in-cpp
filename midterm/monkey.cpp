#include <bits/stdc++.h>
using namespace std;

int main()
{

  char letters[100000];
  int count = 0;

  char c;

  while (true)
  {
    c = getchar();

    if (c == EOF)
    {
      if (count > 0)
      {
        sort(letters, letters + count);
        for (int i = 0; i < count; i++)
        {
          cout << letters[i];
        }
        cout << "\n";
      }
      break;
    }

    if (c == '\n')
    {
      sort(letters, letters + count);
      for (int i = 0; i < count; i++)
      {
        cout << letters[i];
      }
      cout << "\n";
      count = 0;
    }
    else if (c >= 'a' && c <= 'z')
    {
      letters[count++] = c;
    }
  }

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    string S, X;
    cin >> S >> X;

    string result = "";
    int lenS = S.size();
    int lenX = X.size();

    for (int i = 0; i < lenS;)
    {
      if (i <= lenS - lenX && S.substr(i, lenX) == X)
      {
        result += "#";
        i += lenX;
      }
      else
      {
        result += S[i];
        i++;
      }
    }

    cout << result << endl;
  }
  return 0;
}
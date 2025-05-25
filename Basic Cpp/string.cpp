#include <iostream>
using namespace std;
int main()
{
  char str[100];
  // cin >> str;
  cin.ignore();
  cin.getline(str, 100);

  cout << str << endl;
  return 0;
}
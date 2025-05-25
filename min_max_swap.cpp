#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  cout << min(a,b) << endl;
  cout << max(a,b) << endl;
  cout << min({2, 45,5,4,4,45,45}) << endl;

  // swqp function
  // int temp = a;
  // a = b;
  // b = temp;

  swap(a, b);
  cout << a << " " << b << endl;
  return 0;
}
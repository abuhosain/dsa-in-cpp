#include <bits/stdc++.h>
using namespace std;

int main(){
   string s = "hello";
    string s1 = " world";
    // s+= s1;
    // s.append(s1);
    s.push_back('!');
    s.pop_back();
    cout << s << endl;  
   return 0;
};
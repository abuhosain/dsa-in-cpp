#include <bits/stdc++.h>
using namespace std;

int main(){
   string s = "hello";
    string s1 = " world";
    // s+= s1;
    // s.append(s1);
    // s.push_back('!');
    // s.pop_back();
    // string s2 = "hi";
    // s1 = s2;
    s1.assign(s);
    cout << s1 << endl;  
   return 0;
};
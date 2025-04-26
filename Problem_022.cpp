-- Problem Link: https://codeforces.com/problemset/problem/1005/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  string a,b; cin>>a>>b;
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  int i = 0;
  int l = a.length() + b.length();
  if(a[0] != b[0]) cout<<l;
  else{
    while(i < a.length( ) && i < b.length()){
      if(a[i] == b[i]) i++;
      else {
        break;
      }
    }
    cout<<l - ( 2 * i);
  }
  return 0;
}

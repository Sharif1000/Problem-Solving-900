-- Problem Link: https://codeforces.com/problemset/problem/999/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin>>n;
  string s; cin>>s;
  for(int i = 1; i <= n; i++){
    if(n % i == 0){
      reverse(s.begin(), s.begin() + i);
    }
  }
  cout<<s;
  return 0;
}

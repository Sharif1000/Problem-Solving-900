-- Problem Link: https://codeforces.com/contest/1696/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    int cnt = 0;
    bool fragment = false;
    for(int i = 0; i < n; i++){
      if(a[i] > 0 && fragment == false){
        cnt++;
        fragment = true;
      }
      if(a[i] == 0) fragment = false;
    }
    (cnt < 2)? cout<<cnt<<endl: cout<<2<<endl;
  }
  return 0;
}

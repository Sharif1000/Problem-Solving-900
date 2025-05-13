-- Problem Link: https://codeforces.com/contest/1850/problem/D

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      int n, k; cin>>n>>k;
      
      int a[n];
      for(int i = 0; i < n; i++) cin>>a[i];
      sort(a, a+n);
      
      int res = 1, cnt = 1;
      for(int i = 1; i < n; i++){
        if(abs(a[i] - a[i-1]) <= k){
          cnt++;
          res = max(res, cnt);
        }
        else cnt = 1;
      }
      cout<<n - res<<endl;
    }
    return 0;
}

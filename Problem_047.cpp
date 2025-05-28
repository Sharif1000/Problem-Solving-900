-- Problem Link: https://codeforces.com/problemset/problem/1807/D

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin>>t;
  while(t--){
    int n, q; cin>>n>>q;
    vector<int>a(n+1);
    vector<long long> pre(n+1);
    for(int i = 1; i <= n; i++){
      cin>>a[i];
      pre[i] = pre[i-1] + a[i];
    }
    
    while(q--){
      long long l,r,k; cin>>l>>r>>k;
      long long sum = (r - l + 1) * k;
      long long tot = pre[n] + sum - (pre[r] - pre[l-1]);
      
      if(tot % 2 == 1) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
  }
  return 0;
}

-- Problem Link: https://codeforces.com/contest/1709/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m; cin>>n>>m;
  vector<int>v(n);
  for(int i=0; i< n; i++) cin>>v[i];
  vector<long long>l(n),r(n);
  l[0] = 0;
  r[n-1] = 0;
  for(int i = 1; i < n; i++) l[i] = l[i-1] + max(0,v[i-1] - v[i]);
  for(int i = n-2; i >= 0; i--) r[i] = r[i+1] + max(0,v[i+1] - v[i]);
  while(m--){
    int a,b; cin>>a>>b;
    if(a < b) cout<<l[b-1] - l[a-1]<<endl;
    else cout<<r[b-1] - r[a-1]<<endl;
  }
  return 0;
}

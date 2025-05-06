-- Problem Link: https://codeforces.com/problemset/problem/1878/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      long long n, k, x; cin>>n>>k>>x;
      long long mnsm = (k * (k + 1)) / 2;
      long long mxsm = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
      if(x >= mnsm && x <= mxsm) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    return 0;
}

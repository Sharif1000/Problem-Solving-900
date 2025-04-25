-- Problem Link: https://codeforces.com/problemset/problem/1954/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      int n, m, k; cin>>n>>m>>k;
      int val = n - k;
      int onecolor = n / m;
      if(n % m != 0) onecolor++;
      if(val <= onecolor) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
    return 0;
}

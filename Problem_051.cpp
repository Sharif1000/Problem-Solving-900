-- Problem Link: https://codeforces.com/contest/1582/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin>>t;
  while(t--){
    long long n; cin>>n;
    long long one = 0, zero = 0;
    for(int i = 0; i < n; i++){
      int x; cin>>x;
      if(x == 0) zero++;
      else if(x == 1) one++;
    }
    long long res = one * pow(2ll, zero);
    cout<<res<<endl;
  }
  return 0;
}

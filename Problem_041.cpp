-- Problem Link: https://codeforces.com/contest/1828/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int ans = 0;
      for(int i = 1; i <= n; i++){
        int x; cin>>x;
        if(x != i) ans = __gcd(ans, abs(i - x));
      }
      cout<<ans<<endl;
    }
    return 0;
}

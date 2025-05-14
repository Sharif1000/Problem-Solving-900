-- Problem Link: https://codeforces.com/contest/1837/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      string s; cin>>s;
      int ans = 1, cnt = 1;
      for(int i = 1; i< n; i++){
        if(s[i] != s[i-1]) cnt = 1;
        else cnt++;
        ans = max(ans, cnt);
      }
      cout<<ans+1<<endl;
    }
    return 0;
}

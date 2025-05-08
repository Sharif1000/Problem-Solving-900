-- Problem Link: https://codeforces.com/contest/1373/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      string s; cin>>s;
      int c0 = 0, c1 = 0;
      for(int i = 0; i < s.length(); i++){
        if(s[i] == '0') c0++;
        else c1++;
      }
      int cnt = min(c0,c1);
      if(cnt % 2 == 0) cout<<"NET"<<endl;
      else cout<<"DA"<<endl;
    }
    return 0;
}

-- Problem Link: https://codeforces.com/problemset/problem/1972/B 

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      string s; cin>>s;
      int cnt = 0;
      for(int i = 0; i < n; i++){
        if(s[i] == 'U') cnt++;
      }
      if(cnt % 2 == 0) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
    return 0;
}

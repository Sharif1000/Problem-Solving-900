-- Problem Link: https://codeforces.com/problemset/problem/1951/A

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      string s; cin>>s;
      bool flag = false;
      int cnt = 0;
      for(int i = 0; i < n; i++){
        if(s[i] =='1') cnt++;
      }
      
      for(int i = 1; i < n; i++){
        if(s[i] =='1' && s[i-1] == '1') flag = true;
      }
      
      if(cnt == 2 && flag == true) cout<<"NO"<<endl;
      else if(cnt % 2 == 0) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    return 0;
}

--Problem Link: https://codeforces.com/contest/96/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    int cnt = 1;
    for(int i = 1; i < s.size(); i++){
      if(s[i] == s[i-1]) cnt++;
      else cnt = 1;
      if(cnt == 7) break;
    }
    (cnt == 7) ? cout<<"YES":cout<<"NO";
    return 0;
}

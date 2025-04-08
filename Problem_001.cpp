--Problem Link: https://codeforces.com/contest/1606/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
      string s; cin>>s;
      int ab = 0;
      int ba = 0;
      for(int i = 1; i < s.size(); i++){
        if(s[i] == 'b' && s[i-1] == 'a') ab++;
        if(s[i] == 'a' && s[i-1] == 'b') ba++;
      }
      if(ab > ba) s[0] = 'b';
      if(ba > ab) s[0] = 'a';
      cout<<s<<endl;
    }
    return 0;
}

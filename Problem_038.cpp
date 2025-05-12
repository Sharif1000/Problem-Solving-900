-- Problem Link: https://codeforces.com/contest/1593/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
      string s; cin>>s;
      
      int cnt0 = 0, idx0 = 0;
      
      for(int i = s.size()-1; i >= 0; i--){
        if(s[i] != '0') cnt0++;
        else{
          idx0 = i; break;
        }
      }
      for(int i = idx0-1; i >= 0; i--){
        if(s[i] == '0' || s[i] == '5') break;
        else cnt0++;
      } 
      
      int cnt5 = 0, idx5 = 0;      
      
      for(int i = s.size()-1; i >= 0; i--){
        if(s[i] != '5') cnt5++;
        else{
          idx5 = i; break;
        }
      }
      for(int i = idx5-1; i >= 0; i--){
        if(s[i] == '2' || s[i] == '7') break;
        else cnt5++;
      }
      cout<<min(cnt0,cnt5)<<endl;
    }
    return 0;
}

-- Problem Link: https://codeforces.com/problemset/problem/1973/A

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int a,b,c; cin>>a>>b>>c;
      int sm = a + b + c;
      if(sm % 2 == 1) cout<<-1<<endl;
      else{
        cout<<(sm - max(0,c - b - a)) / 2<<endl;
      }
    }
    return 0;
}

-- Problem Link: https://codeforces.com/contest/1543/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      long long a,b; cin>>a>>b;
      long long g = abs(a-b);
      if(a == b) cout<<0<<" "<<0<<endl;
      else {
        long long m = min(b%g, g-b%g);
        cout<<g<<" "<<m<<endl;
      }
    }
    return 0;
}

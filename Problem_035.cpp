-- Problem Link: https://codeforces.com/contest/1440/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n, k; cin>>n>>k;
      int total = n * k;
      int a[total + 1];
      for(int i = 1; i <= total; i++) cin>>a[i];
      long long sm = 0;
      total -=(n / 2);
      int j = (n / 2) + 1;
      int i = n - j;
      int l = i;
      while(l < total){
        sm +=a[total];
        total -=j;
        l +=i;
      }
      cout<<sm<<endl;
    }
    return 0;
}

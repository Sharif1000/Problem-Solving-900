-- Problem Link: https://codeforces.com/contest/1471/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n, k; cin>>n>>k;
      long long mx = 0, mn = 0;
      int a[n];
      for(int i = 0; i < n; i++){
        cin>>a[i];
        mx += ceil((a[i] *1.0) / k);
        mn += a[i];
      }
      mn = ceil((mn * 1.0) / k);
      cout<<mn<<" "<<mx<<endl;
      
      }
    return 0;
}

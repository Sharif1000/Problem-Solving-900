-- Problem Link: https://codeforces.com/problemset/problem/1875/A

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      long long n, k, x; cin>>n>>k>>x;
      long long sm = k;
      long long a[x];
      for(int i = 0; i < x; i++){
        cin>>a[i];
        sm +=min(a[i], n - 1);
      }
      cout<<sm<<endl;
    }
    return 0;
}

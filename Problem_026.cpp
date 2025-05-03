-- Problem Link: https://codeforces.com/problemset/problem/1047/B

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin>>n;
    int mx = 0;
    while(n--){
      int a,b; cin>>a>>b;
      mx = max(mx, (a+b));
    }
    cout<<mx;
    return 0;
}

-- Problem Link: https://codeforces.com/problemset/problem/1607/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int t; cin>>t;
  while(t--){
    ll x, n; cin>>x>>n;
    if(x % 2 == 0){
      if(n % 4 == 0) cout<<x<<endl;
      else if(n % 2 == 0) cout<<x+1<<endl;
      else if(n % 4 == 1) cout<<x - n<<endl;
      else if(n % 4 == 3) cout<<x+1+n<<endl;
    }
    else{
      if(n % 4 == 0) cout<<x<<endl;
      else if(n % 2 == 0) cout<<x-1<<endl;
      else if(n % 4 == 1) cout<<x + n<<endl;
      else if(n % 4 == 3) cout<<x-1-n<<endl;
    }
  }
  return 0;
}

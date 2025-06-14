-- Problem Link: https://codeforces.com/problemset/problem/1855/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
    ll n; cin>>n;
    int cnt = 0;
    int i = 1;
    while(n % i == 0){
      cnt++;
      i++;
    }
    cout<<cnt<<endl;
  }
  return 0;
}

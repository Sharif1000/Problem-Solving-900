--Problem Link: https://codeforces.com/problemset/problem/1475/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
      long long int n; cin>>n;
      if((n & (n - 1)) == 0) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
    return 0;
}

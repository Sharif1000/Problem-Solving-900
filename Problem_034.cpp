-- Problem Link: https://codeforces.com/contest/1380/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int a[n+1];
      for(int i= 1; i <= n; i++) cin>>a[i];
      bool found = false;
      for(int i = 2; i <= n; i++){
        if(a[i] > a[i-1]){
          int j = i+1;
          while(j <= n){
            if(a[j] < a[i]){
              cout<<"YES"<<endl;
              cout<<i-1<<" "<<i<<" "<<j<<endl;
              found = true;
              break;
            }
            j++;
          }
        }
        if(found) break;
      }
      if(!found) cout<<"NO"<<endl;
    }
    return 0;
}

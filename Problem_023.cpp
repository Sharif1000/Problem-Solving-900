
#include<bits/stdc++.h>
using namespace std;

int main() {
      int n,m; cin>>n>>m;
      int a[n];
      for(int i = 0; i < n; i++) cin>>a[i];
      int cnt =2;
      for(int i = 1; i < n; i++){
        if((a[i] - a[i - 1]) == 2*m){
          cnt++;
        }
        if((a[i] - a[i - 1]) > 2*m){
          cnt +=2;
        }
      }
      cout<<cnt;
    return 0;
}
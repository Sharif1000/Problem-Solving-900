--Problem Link: https://codeforces.com/problemset/problem/1585/B


#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
      int n; cin>>n;
      int a[n];
      int mx = 0;
      for(int i = 0; i < n; i++){
        cin>>a[i];
        mx = max(mx, a[i]);
      }
      int cnt = 0;
      int temp = 0;
      bool flag = false;
      for(int i = n-1; i >= 0; i--){
        if(a[i] == mx){
          flag = true;
          break;
        }
        if(a[i] != mx && a[i] > temp){
          cnt++;
          temp = a[i];
        }
      }
      cout<<cnt<<endl;
    }
    return 0;
}

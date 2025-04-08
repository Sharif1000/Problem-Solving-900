--Problem Link: https://codeforces.com/contest/1589/problem/C
  
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      /*int a[n], b[n];*/
      vector<int>a(n), b(n);
      for(int i = 0; i < n; i++){
        cin>>a[i];
      }
      for(int i = 0; i < n; i++){
        cin>>b[i];
      }
      /*sort(a, a+n);
      sort(b, b+n);*/
      sort(a.begin(), a.end());
      sort(b.begin(), b.end());
      bool flag = true;
      for(int i = 0; i < n; i++){
        if(a[i] != b[i]  && a[i] + 1 != b[i]){
          flag = false;
          break;
        }
      }
      /*(flag) ? cout<<"YES"<<endl:cout<<"NO"<<endl;*/
      cout<<((flag) ? "YES": "NO") <<endl;
    }
    return 0;
}

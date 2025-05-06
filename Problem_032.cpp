-- Problem Link: https://codeforces.com/problemset/problem/1869/A

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      int a[n];
      int xorsm = 0;
      bool flag = true;
      for(int i = 0; i < n; i++){
        cin>>a[i];
        xorsm ^=a[i];
        if(a[i] != 0) flag = false;
      }
      if(flag) cout<<0<<endl;
      else if(xorsm == 0){
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
      }
      else if(n % 2 == 0){
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
      }
      else{
        cout<<4<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<1<<" "<<n-1<<endl;   
        cout<<n-1<<" "<<n<<endl;
        cout<<n-1<<" "<<n<<endl;          
      }
    }
    return 0;
}

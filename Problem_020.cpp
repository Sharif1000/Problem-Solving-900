-- Problem Link: https://codeforces.com/contest/991/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
      int n; cin>>n;
      int sum = 0;
      int target = n * 9;
      int cnt = 0;
      int a[n];
      for(int i = 0; i < n; i++){
        cin>>a[i];
        sum +=a[i];
      }
      
      sort(a, a+n);
      
      if(sum * 2 >= target) cout<<0<<endl;
      else{
        for(int i = 0; i < n; i++){
          if(a[i] != 5){
            sum += 5 - a[i];
            cnt++;
            if(sum * 2 >= target){
              cout<<cnt<<endl;
              break;
            }
          }
        }
      }
  return 0;
}

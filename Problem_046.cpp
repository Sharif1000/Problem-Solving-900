-- Problem Link: https://codeforces.com/contest/1535/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    vector<int>even,odd;
    for(int i = 0; i < n; i++){
      int x; cin>>x;
      if(x % 2 == 0) even.push_back(x);
      else odd.push_back(x);
    }
    for(auto it:odd) even.push_back(it);
    int cnt = 0;
    for(int i = 0; i < n - 1; i++){
      for(int j = i+1; j < n; j++){
        if(__gcd(even[i], 2* even[j]) > 1) cnt++;
      }
    }
    cout<<cnt<<endl;
  }
  return 0;
}

-- Problem Link: https://codeforces.com/problemset/problem/1679/A

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin>>t;
  while(t--){
    long long n; cin>>n;
    if(n % 2 == 1 || n == 2) cout<<-1<<endl;
    else{
      long long mx = n / 4;
      long long mn = ceil((n * 1.0) / 6);
      cout<<mn<<" "<<mx<<endl;
    }
  }
  return 0;
}

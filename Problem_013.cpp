--Problem Link: https://codeforces.com/contest/1668/problem/B

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
      long long n,m; cin>>n>>m;
      long long a[n];
      for(long  i = 0; i < n; i++) cin>>a[i];
      sort(a, a + n);
      long long cnt =0;
      for(long long i = 1; i < n; i++) cnt +=a[i];
      cnt += n;
      cnt += a[n - 1];
      (cnt > m)?  cout<<"NO"<<endl:cout<<"YES"<<endl;
    }
    return 0;
}
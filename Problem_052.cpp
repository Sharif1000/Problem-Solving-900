-- Problem Link: https://codeforces.com/problemset/problem/1624/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int t; cin>>t;
  while(t--){
    ll a, b, c; cin>>a>>b>>c;
    bool flag = false;
    
    ll new_a = 2 * b - c;
    if(new_a / a > 0 && new_a % a == 0) flag = true;
    
    ll new_b = (a + c) / 2;
    if(new_b / b > 0 && new_b % b == 0 && (a - c) % 2 == 0) flag = true;
    
    ll new_c = 2 * b - a;
    if(new_c / c > 0 && new_c % c == 0) flag = true;
    
    (flag) ? cout<< "YES": cout<< "NO";
    cout<<endl;
    }
  return 0;
}

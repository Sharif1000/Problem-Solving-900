-- Problem Link: https://codeforces.com/problemset/problem/1726/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while (t--){
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int answer = v[n - 1] - v[0];
    for (int i = 1; i < n; i++) answer = max(answer, v[i] - v[0]);
    for (int i = 0; i < n - 1; i++) answer = max(answer, v[n - 1] - v[i]);
    for (int i = 0; i < n - 1; i++) answer = max(answer, v[i] - v[i + 1]);
    cout << answer << endl;
  }
  return 0;
}

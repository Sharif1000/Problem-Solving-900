-- Problem Link: https://codeforces.com/problemset/problem/1163/A

#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int n, m; cin >> n >> m;
	if(m == 0) cout<<1;
	else cout<<min(m, n - m);
	return 0;
}

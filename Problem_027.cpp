-- Problem Link: https://codeforces.com/contest/1110/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long n, k;
    cin >> n >> k;
    vector<long long> a(k);
    for (int i = 0; i < k; i++) cin >> a[i];

    int parity = 0;
    if (n % 2 == 0) parity = a[k-1] % 2;
    else {
        for (int i = 0; i < k; i++) parity = (parity + (a[i] % 2)) % 2;
    }
    if (parity == 0) cout << "even";
    else cout << "odd";
    return 0;
}

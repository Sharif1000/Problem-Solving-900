--Problem Link: https://codeforces.com/problemset/problem/1945/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long a, b, m; cin>>a>>b>>m;
        long long cnt = 0;
        cnt += m / a + m / b + 2;
        cout<<cnt<<endl;
    }   
    return 0;
}

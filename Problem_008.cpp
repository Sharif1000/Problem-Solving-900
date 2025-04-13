--Problem Link: https://codeforces.com/problemset/problem/1238/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long a, b; cin>>a>>b;
        if((a - b) == 1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}

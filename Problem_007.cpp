--Problem Link: https://codeforces.com/contest/267/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int a, b; cin>>a>>b;
        int cnt = 0;
        while(a > 0 && b > 0){
            if(a > b){
                cnt += a / b;
                a = a % b;
            }
            else{
                cnt += b / a;
                b = b % a;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

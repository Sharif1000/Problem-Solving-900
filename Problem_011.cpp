--Problem Link: https://codeforces.com/contest/1971/problem/C

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int a, b, c, d; cin>>a>>b>>c>>d;
        string s = "";
        for(int i = 1; i <= 12; i++){
          if(i == a || i == b) s +='a';
          if(i == c || i == d) s +='b';
        }
        (s == "abab" || s == "baba") ? cout<<"YES"<<endl:cout<<"NO"<<endl;
    }   
    return 0;
}

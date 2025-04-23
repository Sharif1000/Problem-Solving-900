--Problem Link: https://codeforces.com/contest/1665/problem/B

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        map<int,int>freq;
        for(int i = 0; i < n; i++){
          cin>>a[i];
          freq[a[i]]++;
        }
        int cnt = 0;
        for(auto pair: freq){
          if(pair.second > cnt) cnt = pair.second;
        }
        if(cnt == n) cout<<0<<endl;
        else{
          int rem = n - cnt;
          int res = 0;
          while(rem >= cnt){
            res +=cnt+1;
            rem -=cnt;
            cnt *=2;
          }
          if(rem > 0 && rem < cnt) res +=rem+1;
          cout<<res<<endl;
        }
    }   
    return 0;
}

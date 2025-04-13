--Problem Link: https://codeforces.com/contest/1609/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long arr[n];
        long long res = 1;
        for(int i = 0; i < n; i++){
          cin>>arr[i];
          while(arr[i] % 2 == 0){
            res *=2;
            arr[i] /= 2;
          }
        }
        sort(arr, arr+n);
        arr[n-1] *= res;
        long long sm = 0;
        for(int i = 0; i < n; i++){
          sm +=arr[i];
        }
        cout<<sm<<endl;
    }   
    return 0;
}

--Problem Link: https://codeforces.com/contest/1985/problem/D

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int r, c; cin>>r>>c;
        int colnum = 0;
        bool colflag = false;
        int rownum = 0;
        int rowtot = 0;
        for(int i = 0; i < r; i++){
          string s; cin>>s;
          int cnt = 0;
          for(int j = 0; j < c; j++){
            if(s[j] == '#' && colflag == false){
              colnum = j+1;
              colflag = true;
            }
            if(s[j] == '#'){
              cnt++;
            }            
          }
          if(cnt > rowtot){
            rownum = i +1;
            rowtot = cnt;
          }
        }
        cout<<rownum<<" "<<colnum<<endl;
    }   
    return 0;
}

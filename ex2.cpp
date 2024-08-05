#include <bits/stdc++.h>
using namespace std;
int main(){
     int t;cin>>t;
    while(t>0){
        int idx=t%10;int cnt=0;
        cout<<idx<<endl;
        if(t%idx==0&&idx!=0){
            cnt++;
        }
        t/=10;

    }
    }

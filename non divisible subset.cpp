#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    vector<int > S(n);
    map<int,int> mp;
    for(int &x:S) cin>>x;
     for(int x:S) {
        mp[x%k]++;
     }

    int res=0;
    if(mp[0]>0) res++;
    for(int i=1;i<=k/2;i++){
    if(i!=k-i){
        res+=max(mp[i],mp[k-i]);
    }
    }
    if(k%2==0) res++;
    cout<<res;
}
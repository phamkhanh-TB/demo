#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mp;
    int num;cin>>num;
    vector<int> v;
    for(int i=0;i<num;i++){
        int x;cin>>x;
        v.push_back(x);
        mp[v[i]]++;
    }
    // for(auto x:mp){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    for(int i=0;i<num;i++){
        if(mp[v[i]]!=0){
            cout<<v[i]<<" "<<mp[v[i]]<<endl;
            mp[v[i]]=0;
        }
    }
}
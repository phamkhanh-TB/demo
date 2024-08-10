#include <bits/stdc++.h>
using namespace std;
bool find_sum(vector<int> &v, const int &k){
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            int sum=v[i]+v[j];
            if(sum==k) return true;
        }
        
    }
    return false;
}
int main(){
    vector<int> arr(6);
    for(int &x:arr) cin>>x;
    (find_sum(arr,50)==true)?cout<<"yes":cout<<"no";
}
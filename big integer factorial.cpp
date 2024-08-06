#include <bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
vector<int> v;
v.push_back(1);
for(int i=2;i<=n;i++){
    int carry=0;
    for(int j=0;j<v.size();j++){
        int num=v[j]*i+carry;//4*5=20,2*5+2=12
        v[j]=num%10;//v[0]=0,v[1]=2
        carry=num/10;//carry=2,carry=1
    }
    while(carry!=0){
        v.push_back(carry%10);
        carry/=10;
    }
}
for(int i=v.size()-1;i>=0;i--){
    cout<<v[i];
}
}
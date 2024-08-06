#include <bits/stdc++.h>
using namespace std;
int main(){
   string a;cin>>a;
   string b;cin>>b; 
   int m=a.size();
   int n=b.size();
    int gap=abs(m-n);
    if(a.size()>b.size()) {
      for(int i=0;i<gap;i++){
         b.insert(0,"0");
      }
    }
    if(b.size()>a.size()) {
      for(int i=0;i<gap;i++){
         a.insert(0,"0");
      }
    }
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    vector<int> v(a.size()); 
   int remain=0;
    for(int i=0;i<a.size();i++){
      int num=(a[i]-'0')+(b[i]-'0')+remain;
      v[i]=num%10;
      remain=num/10;
    }
    while(remain!=0){
      v.push_back(remain%10);
      remain/=10;
    }
    reverse(v.begin(),v.end());
    for(auto x:v) cout<<x;
}

#include <bits/stdc++.h>
using namespace std;
int fibonancci (int n){
    if(n<=1){
        return n;
    }else{
        return fibonancci(n-1)+fibonancci(n-2);
    }
}
int main (){
    int n;cin>>n;
    cout<<fibonancci(n);
}

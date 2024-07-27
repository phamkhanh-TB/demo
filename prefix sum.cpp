#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;cin>>num;
   int S[num+1];int A[num+1];
    for (int i=1;i<=num;i++){
        cin>>A[i];
    }
    S[0]=A[0]=0;
    for (int i=1;i<=num;i++){
        S[i]=S[i-1]+A[i];}
    int l,r;cin>>l>>r;
        cout<<S[r]-S[l-1];
}

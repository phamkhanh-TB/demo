#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;cin>>num;
    int arr[100][100];
     for (int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cin>>arr[i][j];
        }
     }
     for (int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cout<<arr[i][j];
        }    
        cout<<endl;
    
     }
}

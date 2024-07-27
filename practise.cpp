#include <bits/stdc++.h>
using namespace std;
struct nv{
    string ma;
    string ten, gt,ns,dc,mst,ngay;

};
void ex(nv nv1){
    cout<<nv1.ma<<endl<<nv1.ten<<endl<<nv1.gt<<endl<<nv1.ns<<endl<<nv1.dc<<endl<<nv1.mst<<endl<<nv1.ngay<<endl;
}
int main(){
    nv nv1;
   
    int n; cin>>n;
    for(int i=1;i<=n;i++){
       nv1.ma="i";
       while (nv1.ma.size()<6){
        nv1.ma="0"+nv1.ma;
       }
        cin.ignore();
        getline(cin,nv1.ten);
        cin>>nv1.ns;
        if(nv1.ns[1]='/'){
            nv1.ns="0"+nv1.ns;
        }
        if(nv1.ns[4]='/'){
            nv1.ns.insert(3,"0");
        }
        cin.ignore();
        getline(cin,nv1.dc);
        cin>>nv1.mst;
        cin>>nv1.ngay;
         if(nv1.ns[1]='/'){
            nv1.ns="0"+nv1.ns;
        }
        if(nv1.ns[4]='/'){
            nv1.ns.insert(3,"0");
        }
        ex(nv1);
    }
}
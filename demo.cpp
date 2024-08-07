#include <bits/stdc++.h>
using namespace std;
struct date {
    int date;
    int month;
    int year;
    void nhap(){
        cin>>date>>month >>year;
    } 
    void xuat(){
        cout<<date<<month<<year;
    }
};
int main(){
    date a;
    a.nhap();
    a.xuat();//test
}

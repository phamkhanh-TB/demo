#include <bits/stdc++.h>
using namespace std;
int main(){
    //  int n,m;cin>>n>>m;
    // vector<vector<int>> arr(n,vector<int> (m));
    // for( int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // for( int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int soHang, soCot;
    cout << "Nhap so hang: ";
    cin >> soHang;
    cout << "Nhap so cot: ";
    cin >> soCot;

    // Khai báo và khởi tạo mảng hai chiều
    vector<vector<int>> mangHaiChieu(soHang, vector<int>(soCot));

    // Nhap gia tri cho tung phan tu
    for (int i = 0; i < soHang; ++i) {
        for (int j = 0; j < soCot; ++j) {
            cout << "Nhap a[" << i << "][" << j << "]: ";
            cin >> mangHaiChieu[i][j];
        }
    }

    // In ra mảng đã nhập
    for (const auto& hang : mangHaiChieu) {
        for (int phanTu : hang) {
            cout << phanTu << " ";
        }
        cout << endl;
    }
}
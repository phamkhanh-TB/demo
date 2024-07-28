#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
	int r1 = a % 2, r2 = b % 2;
	if(r1 == 0 && r2 == 1) return false;
	if(r1 == 1 && r2 == 0) return true;
	if(r1 == 0 && r2 == 0) return a > b;
	if(r1 == 1 && r2 == 1) return a<b;
}
int main(){
	int a[] = {1, 2, 10, 9, 6, 5, 8, 7, 4, 3};
	int n = 10;
	sort(a, a + n, cmp);
	cout << "Mang sau khi sap xep : \n";
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}

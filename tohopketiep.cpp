#include <bits/stdc++.h>
using namespace std;
int n,k,t,ok,a[100];
void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0) ok = 0;
	else{
		a[i]++;
		for(int j = i + 1; j <= n; j++){ // j = i + 1 = 4; j <= 5
			a[j] = a[j-1] + 1; // a[4] = a[3] +1 ; a[5] = a[4] + 1;
		}
	}
}
int main(){
	cout <<"Nhap n: ";
	cin >> n;
	cout <<"Nhap k: ";
	cin >> k;
	cout << "Nhap to hop hien tai: ";
	for(int i =1; i <= k; i++) cin >>a[i];
	cout <<"Nhap so luong to hop ke tiep muon tim: ";
	cin>>t;
	ok = 1;
	while(t--){
		sinh();
		for(int i = 1; i <= k; i++) cout <<a[i]<<" ";
		cout <<endl;
	}
	return 0;
}


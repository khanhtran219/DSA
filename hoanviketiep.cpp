#include<bits/stdc++.h>
using namespace std;
int n,ok,a[10000];
void sinh(){
	int i = n-1;
	while(i>= 1 && a[i] > a[i+1]) i--;
	if(i==0) ok = 0;
	else{
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}
int main(){
	cout <<"Nhap so n: ";
	cin >> n;
	cout <<"Nhap hoan vi: ";
	for(int i = 1; i <= n; i++){
			cin >> a[i];
	}
	ok = 1;
	cout <<"So hoan vi ke tiep can liet ke: ";
	int t; cin >> t;
	while(t--){
		sinh();
		if(ok){
			for(int i = 1; i <= n; i++) cout <<a[i]<<" ";
		}
		sinh();
		cout <<endl;
	}
	
	return 0;
}


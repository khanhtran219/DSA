#include <bits/stdc++.h>
using namespace std;
int ok,n,a[100],b[100],c[100],MAX,k[100];
void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}
void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = 0;
	else a[i] = 1;
}
int main(){
	cout <<"Nhap so luong do vat: ";
	cin >> n;
	cout <<"Nhap gia tri su dung: ";
	for(int i = 1; i <= n; i++) cin >> b[i];
	cout <<"Nhap trong luong: ";
	for(int i = 1; i <= n; i++) cin >> c[i];
	cout <<"Nhap trong luong toi da:";
	cin >> MAX;
	ok = 1; ktao();
	int f=0,g=0,Fopt=0;
	while(ok){
		f=0; g=0;
		for(int i = 1; i <= n; i++){
			f += b[i]* a[i];
			g += c[i] * a[i];
		}
		if(g <= MAX && f > Fopt){
			Fopt = f;
			for(int i = 1; i <= n; i++){
				k[i] = a[i];
			}
		}	
		sinh();
	}
	cout <<"Xopt = ";
	for(int i = 1; i <= n; i++) cout<<k[i];
	cout <<endl<<"Fopt = "<<Fopt<<endl;
	return 0;
}


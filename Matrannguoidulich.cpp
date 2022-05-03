#include <bits/stdc++.h>
using namespace std;
int n,ok,a[100],c[100][100],k[100],s,MIN =999999;
void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}
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
	cout <<"Nhap so thanh pho: ";
	cin >> n;
	cout <<"Nhap ma tran chi phi:"<<endl;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> c[i][j];
		}
	}
	ok = 1; ktao();
	while(ok){
		s = 0;
		for(int i = 1; i <= n; i++){
			if(i==n) s += c[a[i]][a[1]];
			else
			s += c[a[i]][a[i+1]];
			
		}
		if(s < MIN) {
			MIN = s;
			for(int i = 1; i <= n; i++){
				k[i] = a[i];
			}
		}
		sinh();
		if(a[1] == 2) break;
	}
	cout <<"Hanh trinh toi uu: ";
	for(int i = 1; i <= n; i++) cout <<k[i]<<" ";
	cout <<"1"<<endl;
	cout << "Fopt = "<<MIN<<endl;
	return 0;
}


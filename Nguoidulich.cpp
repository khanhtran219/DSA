#include <bits/stdc++.h>
using namespace std;
int chuaxet[100];
int n,c[20][20];
int s = 0,MIN = 10000000,cmin=10000000;
void try (int i){
	if(s + cmin*(n-i+1) >= MIN) return;
	for(int j = 2; j <= n; j++){
		if(chuaxet(j)){
			x[i] = j;
			chuaxet[j] = 0;
			s += c[x[i-1]][x[i]];
			if(i==n){
				if(s +c[x[n]][x[1]]< MIN) MIN = s+c[x[n]][x[1]];
			}else try(i+1);
			s += c[x[i-1]][j];
			chuaxet[j]=1;
		}
	}
}
int main(){
	cout <<"Nhap so thanh pho: ";
	cin >> n;
	Cout <<"Nhap ma tran chi phi:"<<endl;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> c[i][j];
			if(c[i][j] != 0) cmin = min(cmin,a[i][j]);
		}
	}
	memset(chuaxet,1,sizeof(chuaxet));
	chuaxet[1] = 0;
	x[1] = 1;
	try(2);
	cout <<MIN<<endl;
	return 0;
}


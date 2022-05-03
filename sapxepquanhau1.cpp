#include <bits/stdc++.h>
using namespace std;
int n,a[1000],cot[101],d1[101],d2[101],dem;
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] == 1 && d1[i-j+n] == 1 && d2[i+j-1] == 1){
			a[i] = j;
			cot[j] = 0;
			d1[i-j+n] = 0;
			d2[i+j-1] = 0;
			if(i==n){
				dem++;
			}else Try(i+1);
			cot[j] = 1;
			d1[i-j+n] = 1;
			d2[i+j-1] = 1;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= 100; i++){
			cot[i]= d1[i] = d2[i] = 1;
		}
		dem = 0;
		Try(1);
		cout <<dem<<endl;
	}
}

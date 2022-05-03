#include <bits/stdc++.h>
using namespace std;
int a[1000],b[9][9],cot[101],d1[101],d2[101],maxx;
void hehe(){
	int s = 0;
	for(int i = 1; i <=8; i++){
		s += b[i][a[i]];
	}
	maxx = max(maxx,s);
}
void Try(int i){
	for(int j = 1; j <= 8; j++){
		if(cot[j] == 1 && d1[i-j+8] == 1 && d2[i+j-1] == 1){
			a[i] = j;
			cot[j] = 0;
			d1[i-j+8] = 0;
			d2[i+j-1] = 0;
			if(i==8){
				hehe();
			}else Try(i+1);
			cot[j] = 1;
			d1[i-j+8] = 1;
			d2[i+j-1] = 1;
		}
	}
}
int main(){
	int t; cin >> t;
	int dem = 1;
	while(t--){
		for(int i = 1; i <= 8; i++){
			for(int j = 1; j <= 8; j++){
				cin >> b[i][j];
			}
		}
		for(int i = 1; i <= 100; i++){
			cot[i] = d1[i] = d2[i] = 1;
		}
		maxx=0;
		Try(1);
		cout <<"Test "<<dem++<<": "<<maxx<<endl;
	}
}

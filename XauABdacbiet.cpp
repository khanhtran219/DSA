#include <bits/stdc++.h>
using namespace std;
int n,k,ok;
int a[20],b[20][20];
void ktao(){
	ok = 1;
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
bool check(){
	int s = 0,dem =0;
	for(int i = 1; i <= n; i++){
		if(a[i]==0){
			s++;
		}else{
			s = 0;
		}
		if( s >= k) dem++;
	}
	return dem == 1;
}
int main(){
	int t ; cin >> t;
	while(t--){
		cin >> n>>k;
		ktao();
		int dem = 0;
		while(ok){
			if(check()){
				dem++;
				for(int i = 1; i <= n; i++){
					b[dem][i] = a[i]; 
				}
				
			}
			sinh();
		}
		cout <<dem<<endl;
		for(int i = 1; i <= dem; i++){
			for(int j = 1; j <= n; j++){
				cout <<(char)(b[i][j]+65);
			}
			cout <<endl; // cau troi dung WA nua huhu
		}
	}
}

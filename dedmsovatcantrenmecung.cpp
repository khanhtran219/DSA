#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	char tmp;
	cin >>n>>m>>tmp;
	char a; int b[n+5][m+5]={0},dem=0;
	for(int i = 0; i <n; i++){
		for(int j = 0; j < n; j++){
			cin >>a;
			if(a == '#'){
				dem++;
				b[i][j] = 1;
			}
			cout <<b[i][j]<<" ";
		}
		cout <<endl;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m-1; j++){
			if(b[i][j]&&b[i][j+1]) dem--;
		}
	}
	cout <<dem<<endl;
	for(int j = 0; j < m; j++){
		for(int i = 0; i < n-1; i++ ){
			if(b[i][j]&&b[i+1][j]) dem--;
			cout <<b[i][j]<<dem<<" ";
		}
		cout <<endl;
	}
	cout <<dem<<endl;
	return 0;
}


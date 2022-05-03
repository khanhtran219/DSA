#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,dem=0;
	cin >>n>>m;
	string s[n];
	for(int i = 0; i <n; i++){
		getline(cin>>ws,s[i]);
		for(int j = 0; j < m; j++){
			if(s[i][j] == '#') dem++;
		}
	}
	for(int i=0; i < n; i++){
		for(int j = 0; j < m-1; j++){
			if(s[i][j] =='#' && s[i][j+1]=='#') dem--;
		}
	}
	for(int j = 0; j < m; j++){
		for(int i = 0; i < n-1; i++){
			if(s[i][j] =='#' && s[i+1][j]=='#') dem--;
		}
	}
	cout <<dem<<endl;
	return 0;
}


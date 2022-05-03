#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,dem=0;
	string a[10000];
	cin >> n>> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			if(a[i][j]=='#') dem++;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] == '#'){
				if(a[i-1][j] == '#' || a[i][j-1] == '#') dem--;
			}
		}
	}
	cout <<dem<<endl;
}

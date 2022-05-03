#include <bits/stdc++.h>
using namespace std;
int m,n,a[105][105],dem;
void Try(int i, int j){
	if(i == m && j == n) dem++;
	else{
		if(i < m) Try(i+1,j);
		if(j < n) Try(i,j+1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> m>>n;
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++) cin >> a[i][j];
		}
		dem = 0;
		Try(1,1);
		cout <<dem<<endl;
	}
}

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int v,e,x,y,a[1005][1005]={0};
		cin >> v >> e;
		while(e--){
			cin >> x>>y;
			a[x][y] = 1;
			a[y][x] = 1;
		}
		for(int i = 1; i <= v; i++){
			cout <<i<<":";
			for(int j = 1; j <= v; j++){
				if(a[i][j]) cout <<" "<<j;
			}
			cout <<endl;
		}
	}
}

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int v,e,a[1005][1005]={0};
		cin >> v>>e;
		while(e--){
			int x,y;
			cin >>x>>y;
			a[x][y] = 1;
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

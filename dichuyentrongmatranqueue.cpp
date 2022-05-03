#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int m,n,ok=0; cin >> m>>n;
		int a[m+5][n+5];
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			}
		}
		queue<pair<int,int> > q;
		q.push({1,1});
		int f[m+5][n+5] = {0};
		while(!q.empty()){
			pair<int,int> top = q.front(); q.pop();
			if(top.first == m && top.second == n){
				ok = 1;
				break;
			}
			int x = top.first + a[top.first][top.second];
			int y = top.second + a[top.first][top.second];
			if(x >= 1 && x <= m && top.second >= 1 && top.second <= n && !f[x][top.second]){
				f[x][top.second] = f[top.first][top.second] + 1;
				q.push({x,top.second});
			}
			if(top.first >= 1 && top.first <= m && y >= 1 && y <= n && !f[top.first][y]){
				f[top.first][y] = f[top.first][top.second] + 1;
				q.push({top.first,y});
			}
		}
		if(ok) cout <<f[m][n]<<endl;
		else cout <<-1<<endl;
	}
}

#include <bits/stdc++.h>
using namespace std;
int dx[8] = {-2,-2,2,2,-1,-1,1,1};
int dy[8] = {1,-1,-1,1,2,-2,-2,2};
int bfs(int x, int y,int u, int v){
	int a[10][10] = {0};
	queue<pair<int,int> > q;
	q.push({x,y});
	while(!q.empty()){
		pair<int,int> top = q.front(); q.pop();
		if(top.first == u && top.second == v) return a[top.first][top.second];
		for(int i = 0; i < 8; i++){
			int x1 = top.first + dx[i];
			int y1 = top.second + dy[i];
			if(x1 >= 1 && x1 <= 8 && y1 >= 1 && y1 <= 8 && !a[x1][y1]){
				a[x1][y1] = a[top.first][top.second]+1;
				q.push({x1,y1});
			}
		}
	}
	return -1;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; getline(cin >>ws,s);
		int x = s[0]-96;
		int y = s[1]-48;
		int u = s[3]-96;
		int v = s[4]-48;
		cout <<bfs(x,y,u,v)<<endl;
	}
}

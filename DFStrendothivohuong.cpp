#include <bits/stdc++.h>
using namespace std;
bool visited[1005];
vector<int> add[1005]; 
void DFS(int u){
	cout << u<<" ";
	visited[u] = true;
	for(int x : add[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		memset(visited,false,sizeof(visited));
		int v,e,u;
		cin >> v>>e>>u;
		for(int i = 1; i <= v; i++){
			add[i].clear();
		}
		for(int i = 0; i < e; i++){
			int x,y;
			cin >> x>>y;
			add[x].push_back(y);
			add[y].push_back(x);
		}
		DFS(u);
		cout <<endl;
	}
}

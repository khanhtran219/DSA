#include <bits/stdc++.h>
using namespace std;
bool visited[1005];
vector<int> adj[1005];
void DFS(int u){
	cout <<u<<" ";
	visited[u] = true;
	for(int v : adj[u]){
		if(!visited[v]) DFS(v);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int v,e,u;
		cin >> v>>e>>u;
		memset(visited,false,sizeof(visited));
		for(int i = 1; i <= v; i++){
			adj[i].clear();
		}
		for(int i = 1; i <= e; i++){
			int x,y;
			cin >> x>>y;
			adj[x].push_back(y);
		}
		DFS(u);
		cout <<endl;
	}
}

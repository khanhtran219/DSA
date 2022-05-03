#include <bits/stdc++.h>
using namespace std;
bool visited[1005];
vector<int> adj[1005];
void BFS(int u){
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		cout <<v<<" ";
		for(int x : adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
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
			int x,y; cin >> x>>y;
			adj[x].push_back(y);
		}
		BFS(u);
		cout <<endl;
	}
}

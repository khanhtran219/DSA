#include <bits/stdc++.h>
using namespace std;
int ok;
bool visited[1005];
vector<int> adj[1005];
vector<int> res;
void DFS(int s,int t){
	res.push_back(s);
	visited[s] = true;
	if(s==t){
		ok = 1;
		return;
	}
	for(int x: adj[s]){
		if(!visited[x]) DFS(x,t);
	}
} 
int main(){
	int t; cin >> t;
	while(t--){
		ok = 0;
		res.clear();
		memset(visited,false,sizeof(visited));
		int v,e,s,t;
		cin >> v>>e>>s>>t;
		for(int i = 1;i <= v; i++){
			adj[i].clear();
		}
		for(int i = 1; i <= e; i++){
			int x,y;
			cin >> x>>y;
			adj[x].push_back(y);
		}
		DFS(s,t);
		if(ok) for(int i = 0; i < res.size(); i++) cout << res[i]<<" ";
		else cout <<-1;
		cout <<endl;
	}
}

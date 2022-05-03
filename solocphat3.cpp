#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		queue<string> q;
		q.push("6");
		q.push("8");
		vector<string> vt;
		while(q.front().size() <= n){
			vt.push_back(q.front());
			q.push(q.front()+"6");
			q.push(q.front()+"8");
			q.pop();
		}
		cout <<vt.size()<<endl;
		for(int i = vt.size()-1; i >= 0; i--){
			cout <<vt[i]<<" ";
		}
		cout <<endl;
	}
}

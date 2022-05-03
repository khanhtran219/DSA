#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		queue<string> q;
		q.push("6");
		q.push("8");
		int n; cin >> n;
		int res = 0;
		for(int i = 1; i <= n; i++){
			res += pow(2,i);
		}
		cout <<res<<endl;
		while(q.front().size() <= n){
			cout <<q.front()<<" ";
			q.push(q.front()+"6");
			q.push(q.front()+"8");
			q.pop();
		}
		cout <<endl;
	}
}

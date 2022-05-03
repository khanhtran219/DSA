#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		queue<string> q;
		q.push("1");
		int n; cin >> n;
		while(n--){
			q.push(q.front() + "0");
			q.push(q.front() + "1");
			cout <<q.front()<<" ";
			q.pop();
		}
		cout <<endl;
	}
}

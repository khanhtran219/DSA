#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		queue<long long> q;
		q.push(1);
		while(q.front()%n!=0){
			q.push(q.front()*10);
			q.push(q.front()*10+1);
			q.pop();
		}
		cout <<q.front()<<endl;
	}
}

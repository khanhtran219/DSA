#include <bits/stdc++.h>
using namespace std;
int main(){
	queue<int> q;
	int t; cin >>t;
	while(t--){
		string s;
		cin >> s;
		if(s=="PUSH"){
			int n; cin >> n;
			q.push(n);
		}else if(s=="PRINTFRONT"){
			if(!q.empty()) cout <<q.front()<<endl;
			else cout <<"NONE"<<endl;
		}else{
			if(!q.empty()) q.pop();
		}
	}
}

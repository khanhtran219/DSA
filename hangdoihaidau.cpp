#include <bits/stdc++.h>
using namespace std;
int main(){
	deque<int> dq;
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(s=="PUSHFRONT"){
			int n; cin >> n;
			dq.push_front(n);
		}else if(s =="PRINTFRONT"){
			if(dq.empty()) cout <<"NONE"<<endl;
			else cout <<dq.front()<<endl;
		}else if(s == "POPFRONT"){
			if(!dq.empty()) dq.pop_front();
		}else if(s=="PUSHBACK"){
			int n; cin >> n;
			dq.push_back(n);
		}else if(s == "PRINTBACK"){
			if(dq.empty()) cout <<"NONE"<<endl;
			else cout <<dq.back()<<endl;
		}else{
			if(!dq.empty()) dq.pop_back();
		}
	}
}

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	stack<int> st;
	while(t--){
		string s; cin >> s;
		if(s == "PUSH"){
			int n; cin >> n;
			st.push(n);
		}else if(s=="POP" && !st.empty()){
			st.pop();
		}else if(s == "PRINT"){
			if(st.empty()) cout <<"NONE"<<endl;
			else cout <<st.top()<<endl;
		}
	}
}

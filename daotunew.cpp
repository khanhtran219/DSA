#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s;
		getline(cin >> ws,s);
		stack<string> st;
		stringstream ss(s);
		while(ss >>s) st.push(s);
		while(!st.empty()){
			cout <<st.top()<<" ";
			st.pop();
		}
		cout <<endl;
	}
}

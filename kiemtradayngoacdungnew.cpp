#include<bits/stdc++.h>
using namespace std;
string s;
bool ngoacDung(){
	stack<char> st;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '[' || s[i] =='{' || s[i] == '(') st.push(s[i]);
		if(s[i] == ']'){
			if(st.top() == '[') st.pop();
			else return false;
		}
		if(s[i] == '}'){
			if(st.top() == '{') st.pop();
			else return false;
		}
		if(s[i] == ')'){
			if(st.top() == '(') st.pop();
			else return false;
		}
	}
	if(st.empty()) return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> s;
		if(ngoacDung()) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
}

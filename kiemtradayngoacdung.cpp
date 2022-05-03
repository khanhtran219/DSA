#include <bits/stdc++.h>
using namespace std;
int check(string s){
	stack<char> st;
	for(int i = 0; i < s.length(); i++){
		if(s[i] =='('||s[i] =='['||s[i] =='{') st.push(s[i]);
		else{
			if(st.empty()) return 0;
			char in = st.top(), out = s[i];
			if(in == '(' && out ==')') st.pop();
			else if(in =='[' && out == ']') st.pop();
			else if(in =='{' && out =='}') st.pop();
			else return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	string s;
	cin >> t;
	while (t--){
		cin >> s;
		if(check(s)) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
	return 0;
}


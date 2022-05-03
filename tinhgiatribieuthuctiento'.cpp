#include <bits/stdc++.h>
using namespace std;
int tinh(int a, int b, char x){
	if(x=='+') return a+b;
	if(x== '-') return a-b;
	if(x == '*') return a*b;
	if(x== '/') return a/b;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<int> st;
		for(int i = s.size()-1; i >= 0; i--){
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
				int a = st.top(); st.pop();
				int b = st.top(); st.pop();
				st.push(tinh(a,b,s[i]));
			}else{
				st.push(s[i]-48);
			}
		}
		cout << st.top()<<endl;
	}
}

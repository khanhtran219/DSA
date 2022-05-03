#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack<string> st;
		for(int i = s.size()-1; i >= 0; i--){
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
				string tmp = st.top();
				st.pop();
				tmp += st.top() + s[i];
				st.pop();
				st.push(tmp);
			}else{
				string tmp = "";
				tmp += s[i];
				st.push(tmp);
			}
		}
		cout <<st.top()<<endl;
	}
}

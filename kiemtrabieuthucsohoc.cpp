#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s;
		getline(cin>>ws,s);
		stack<char> st;
		bool ok;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == ')'){
				ok = true;
				char top = st.top();
				st.pop();
				while(top != '('){
					if(top == '+' || top == '-' || top == '*' || top == '/'){
						ok = false;
					}
					top = st.top();
					st.pop();
				}
				if(ok) break;
			}
			else st.push(s[i]);
		}
		if(ok) cout <<"Yes"<<endl;
		else cout <<"No"<<endl;
	}
}

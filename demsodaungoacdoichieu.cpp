#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> st;
		int cnt = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '('){
				st.push(s[i]);
			}else{
				if(st.empty()){
					cnt++;
					st.push('(');
				}else{
					st.pop();
				}
			}
		}
		if(!st.empty()){
			cnt += st.size()/2;
		}
		cout <<cnt<<endl;
	}
}

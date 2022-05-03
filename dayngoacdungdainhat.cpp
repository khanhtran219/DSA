#include <bits/stdc++.h>
using namespace std;
int tinh(string s){
	stack<int> st; int kq=0;
	st.push(-1);
	for(int i = 0; i < s.length(); i++){
		if(s[i] =='(') st.push(i);
		else{
			st.pop();
			if(!st.empty()){
				kq = max(kq,i-st.top());
			}else{
				st.push(i);
			}
		}
	}
	return kq;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout <<tinh(s)<<endl;
	}
	return 0;
}


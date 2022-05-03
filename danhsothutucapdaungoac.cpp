#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		getline(cin>>ws,s);
		stack<int> st;
		int k = 1;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == '(') {
				st.push(k);
				cout<<k<<" ";
				k++;
			}if(s[i] == ')'){
				cout<<st.top()<<" ";
				st.pop();
			}
		}
		cout <<endl;
	}
	return 0;
}


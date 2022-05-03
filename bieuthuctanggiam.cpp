#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	int k = 1;
	while(k<=t){
		string s;
		cin >> s;
		stack<int> st;
		for(int i = 0; i < s.length(); i++){
			st.push(i+1);
			if(s[i] == 'I'){
				while(!st.empty()){
					cout<<st.top();
					st.pop();
				}
			}
		}
		st.push(s.length()+1);
		while(!st.empty()){
			cout<<st.top();
			st.pop();
		}
		cout <<endl;
		k++;
	}
	return 0;
}


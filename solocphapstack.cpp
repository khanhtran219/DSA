#include <bits/stdc++.h>
using namespace std;
int ok = 0;
string s[100];
void locphat(int n){
	for(int i = 0 ; i < n; i++) s[n][i] = '6';
	
}
void sinh(int n){
	int i = n-1;
	while(s[n][i] =='8') i--;
	if(i==-1) ok =0;
	else{
		s[n][i] ='8';
		for(int j=i+1; j < n; j++) s[n][i] ='6';
	}	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		stack<string> st;
		for(int i = 1; i <= n; i++){
			locphat(i);
			int ok = 1;
			while(ok){
				st.push(s[i]);
				sinh(i);
			}
		}
		cout <<st.size()<<endl;
		while(!st.empty()){
			cout <<st.top()<<" ";
			st.pop();
		}
		cout <<endl;
	}
	return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main(){
	stack<int> st;
	string s;
	int n;
	while(cin >> s){
		if(s == "push"){
			cin >> n;
			st.push(n);
		}else if(s=="pop"){
			st.pop();
		}else{
			if(st.empty()){
				cout<<"empty"<<endl;
				continue;
			}else{
				vector<int> a;
				while(!st.empty()){
					a.push_back(st.top());
					st.pop();
				}
				for(int i = a.size()-1; i >= 0; i--){
					cout << a[i]<<" ";
					st.push(a[i]);
				}
				cout <<endl;
			}
		}
	}
}

#include <bits/stdc++.h>
using namespace std;
vector<int> s;
int n,ok;
void sinh(){
	int i = s.size()-1;
	while(s[i] == 1){
		i--;
	}
	if(i==-1) ok = 0;
	else{
		s[i]--;
		s.push_back(1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		s.clear();
		cin >> n;
		s.push_back(n);
		ok = 1;
		while(ok){
			cout <<"(";
			for(int i = 0; i < s.size()-1; i++){
				cout << s[i]<<" ";
			}
			cout << s[s.size()-1]<<") ";
			sinh();
		}
		cout <<endl;
	}
}

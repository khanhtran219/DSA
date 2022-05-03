#include <bits/stdc++.h>
using namespace std;
vector<string> res;
int n,a[100];
string s;
void KQ(){
	string str = "";
	for(int i = 1; i <= n; i++){
		if(a[i]){
			str += s[i-1];
		}
	}
	res.push_back(str);
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n){
			KQ();
		}else Try(i+1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		res.clear();
		cin>> n;
		cin >> s;
		Try(1);
		sort(res.begin(),res.end());
		for(int i = 0; i < res.size(); i++){
			cout<<res[i]<<" ";
		}
		cout <<endl;
	}
}

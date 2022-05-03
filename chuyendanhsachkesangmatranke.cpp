#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n+5][n+5] = {0};
	for(int i = 1; i <= n; i++){
		string s;
		getline(cin >> ws,s);
		stringstream ss(s);
		while(ss >> s){
			a[i][stoi(s)] = 1;
			a[stoi(s)][i] = 1;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout <<a[i][j]<<" ";
		}
		cout <<endl;
	}
}

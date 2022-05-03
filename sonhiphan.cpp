#include <bits/stdc++.h>
using namespace std;
void nhiphan(int n){
	queue <string> Q;
	Q.push("1");
	while(n--){
		string x = Q.front(); Q.pop();
		cout <<x<<" ";
		Q.push(x + "0");
		Q.push(x+"1");
	}
	cout <<endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		nhiphan(n);
		
	}
	return 0;
}


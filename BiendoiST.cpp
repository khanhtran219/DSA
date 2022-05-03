#include <bits/stdc++.h>
using namespace std;
int dem(int s, int t){
	int i,j,a[20000];
	for(i = 0; i < 20000; i++) a[i] = INT_MAX;
	queue<int> Q;
	Q.push(s); a[s] = 0;
	while(!Q.empty()){
		int i = Q.front(); Q.pop();
		if(a[t] != INT_MAX) break;
		if(i-1>0&&a[i-1]==INT_MAX){
			a[i-1] = min(a[i-1],a[i]+1);
			Q.push(i-1);
		}
		if(i*2 < 20000&& a[i*2] == INT_MAX){
			a[i*2] = min(a[i*2],a[i]+1);
			Q.push(i*2);
		}
	}
	return a[t];
}
int main(){
	int t,s,n;
	cin >> t;
	while(t--){
		cin >> s>>n;
		cout <<dem(s,n)<<endl;
	}
	return 0;
}


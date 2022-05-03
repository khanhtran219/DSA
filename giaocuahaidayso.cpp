#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n>>m;
	int a[n],b[m], c[10000]={0},d[10000]={0};
	for(int i = 0; i < n; i++){
		cin >> a[i];
		c[a[i]]++;
	}
	for(int i=0; i < m; i++) {
		cin >> b[i];
		d[b[i]]++;	
	}
	for(int i = 0; i <=1000; i++){
		if(c[i]>=1 &&d[i]>=1) cout <<i<<" ";
	}
	return 0;
}


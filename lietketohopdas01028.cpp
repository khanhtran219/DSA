#include <bits/stdc++.h>
using namespace std;
int m,n,k,ok,a[1000],b[10000]={0},d[100];
vector<int> c;
void ktao(){
	ok = 1;
	for(int i = 1; i <= k; i++){
		d[i] = i;
	}
}
void sinh(){
	int i = k;
	while(i >= 1 && d[i] == n-k+i) i--;
	if(i==0) ok = 0;
	else{
		d[i]++;
		for(int j = i+1; j <= k; j++){
			d[j] = d[j-1] + 1;
		}
	}
}
int main(){
	cin >> m>>k;
	for(int i = 1; i <= m; i++){
		cin >> a[i];
		if(b[a[i]]==0){
			c.push_back(a[i]);
			b[a[i]] = 1;
		}
	}
	sort(c.begin(),c.end());
	n = c.size();
	ktao();
	while(ok){
		for(int i = 1; i <= k; i++){
			cout <<c[d[i]-1]<<" ";
		}
		cout <<endl;
		sinh();
	}
}

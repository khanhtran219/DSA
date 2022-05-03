#include<bits/stdc++.h>
using namespace std;
int n,a[16][16],res=99999999,cmin = 99999999,used[20],x[20],s=0;
void Try(int i){
	if(s + cmin*(n-i+1) >= res) return;
	for(int j = 2; j <= n; j++){
		if(!used[j]){
			used[j] = 1;
			x[i] = j;
			s += a[x[i-1]][j];
			if(i == n){
				res = min(s+a[j][1],res);
			}else Try(i+1);
			s -= a[x[i-1]][j];
			used[j] = 0;
		}
	}
}
int main(){
	cin >> n;
	memset(used,0,sizeof(used));
	for(int i = 1 ; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			if(a[i][j] < cmin) cmin = a[i][j];
		}
	}
	x[1]=1;
	res = 99999999;
	Try(2);
	cout <<res<<endl;
}


#include<bits/stdc++.h>
using namespace std;
long long C[65][65];
int main(){
	int i,j;
	for(i = 0; j <= 60; i++){
		for(j = 0; j <=i;j++){
			if(j==0||j==i) C[i][j] = 1;
			else C[i][j] = C[i-1][j-1] + C[i-1][j];
		}
	}
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		cout<<C[2*n][n]/(n+1)<<endl;
	}
	return 0;
}


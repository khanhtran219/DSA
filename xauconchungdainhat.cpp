#include<bits/stdc++.h>
using namespace std;
int C[1001][1001];
int qhd(string s1, string s2){
	int i,j;
	for(i=0;i<=1000;i++){
		C[0][i] = 0;
		C[i][0] = 0;
	}
	int n= s1.length(), m= s2.length();
	for(i=1;i<=n;i++){
		for(j = 1;j<=m;j++){
			if(s1[i-1]==s2[j-1]) C[i][j] = C[i-1][j-1]+1;
			else C[i][j] = max(C[i-1][j],C[i][j-1]);
		}
	}
	return C[n][m];
}
int main(){
	int t; string s1,s2;
	cin>>t;
	while(t--){
		cin >>s1>>s2;
		cout<<qhd(s1,s2)<<endl;
	}
	return 0;
}


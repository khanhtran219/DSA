#include<bits/stdc++.h>
using namespace std;
int ktra(long long n){
	long long s1[7]={2,3,5,7,13,17,19};
	long long s2[7];
	for(int i = 0; i < 7 ;i ++){
		s2[i] = pow(2,s1[i]-1)*(pow(2,s1[i])-1);
		if(n == s2[i]) return 1;
	}
	return 0;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		long long n;
		cin >> n;
		long long s1[7]={2,3,5,7,13,17,19};
		long long s2[7];
		cout <<ktra(n)<<endl;
	}
}


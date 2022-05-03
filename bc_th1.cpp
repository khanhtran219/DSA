#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,max1 = 0, max2 = 0, A[505],B[505]={0},s2;
	cin >> n>> m;
	for(int i = 0; i < n; i++){
		cin >> A[i];
		B[A[i]]++;
		if(B[A[i]] > max1){
			max1 = B[A[i]];
		}
	}
	for(int i = 0; i < n; i++){
		if(B[A[i]] == max1) B[A[i]] = 0;
	}
	for(int i = 0; i < n; i++){
		if(B[A[i]] > max2){
			max2 = B[A[i]];
			s2 = A[i];
		}
	}
	if( max2 == 0) cout << "NONE"<<endl;
	else cout << s2;
	return 0;
}


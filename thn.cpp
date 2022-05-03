#include <bits/stdc++.h>
using namespace std;
int n, k,A[100];
void quayLui(int i){
	for(int j = n - k+ i; j >= A[i-1]+1; j--){
		A[i] = j;
		if(i == k){
			for(int l = 1; l <= k; l++) cout <<A[l]<<" ";
			cout <<endl;
		}else quayLui(i+1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n>>k;
		quayLui(1);
	}
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, A[30];
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> A[i];
		}
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(A[i] > A[j]) swap(A[i],A[j]);
			}
		}
		long long s1 = 0, s2 = 0;
		for(int i = 0; i < n; i++){
			if(i % 2 == 0) s1 = s1*10+A[i];
			else s2 = s2*10 + A[i];
		}
		cout << s1+s2<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k,A[100000];
		cin >> n >>k;
		for(int i = 0; i < n; i++){
			cin >> A[i];
		}
		int dem = 0;
		sort(A,A+n);
		for(int i = 0; i < n-1; i++){
			int j = i;
			while(A[++j] < A[i] + k && j < n){
				dem++;
			}
		}
		cout << dem<<endl;
	}
	return 0;
}


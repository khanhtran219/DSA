#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x,A[1005],dem = 0;
		cin >> n>>x;
		for(int i = 0; i < n; i++){
			cin >> A[i];
			if(A[i] == x) dem++;
		}
		cout<< dem<<endl;
	}
	return 0;
}


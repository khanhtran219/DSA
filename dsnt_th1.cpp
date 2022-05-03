#include<bits/stdc++.h>
using namespace std;
int kt (int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int L,R,dem = 0;
		cin >> L>>R;
		for(int i = L; i <= R; i++){
			if(kt(i)) dem++;
		}
		cout << dem<<endl;
	}
	return 0;
}


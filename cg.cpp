#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long k;
		cin >> n >> k;
		int i = n; 
		k--;
		if (k % 2 == 0){
			cout << (char)65;
			continue;
		}
		while(i--){
			int j = pow(2, i);
			if (k % j == j-1){
				cout << (char)(65+i);
				break;
			}
		}
		cout << endl;
	}
	return 0;
}

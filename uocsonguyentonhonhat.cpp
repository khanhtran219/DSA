#include<bits/stdc++.h>
using namespace std;
int ktsnt (int n){
	for(int i = 2; i <= sqrt(n);i++){
		if( n % i == 0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout <<"1 ";
		for(int i = 2; i <= n; i++){
			if(i % 2 == 0) cout <<"2"<<" ";
			else{
				for(int j = 3; j <=n; j+= 2){
					if(ktsnt(j) && i % j == 0){
						cout << j<<" ";
						break;
					}
				}
			}
		}
		cout <<endl;
	}
	return 0;
}


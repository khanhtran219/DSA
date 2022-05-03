#include<bits/stdc++.h>
using namespace std;

int snt(int n){
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}

int sphenic(int n){
	int k = n;
	int dem = 0;
	if(n % 2 == 0){
		n /= 2;
		dem++;
	}
	for (int i = 3; i < k; i+=2){
		if (snt(i)){
			if(n % i == 0){
				n /= i;
				dem++;
			}
		}
		if (dem == 3 && n == 1){
			return 1;
		}
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if (sphenic(n)){
			cout << "1" << endl;
		}else{
			cout << "0" << endl;	
		}
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int giam ( int a){
	int b = a % 10;
	a /= 10;
	while(a){
		if(a % 10 >= b){
			return 0;
		}
		b = a % 10;
		a /= 10;
		
	}
	return 1;
}
int tang ( int a){
	int b = a % 10;
	a /= 10;
	while(a){
		if(a % 10 <= b){
			return 0;
		}
		b = a % 10;
		a /= 10;
	}
	return 1;
}
int kt (int a){
	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return 0;
	}
	return 1;
}
int main(){
	int n,a;
	cin >> n;
	while(n--){
		int dem = 0;
		cin >> a;
		for(int i = pow(10, a-1); i <= pow(10,a)-1; i++){
			if(tang(i) || giam(i)){
				if(kt(i)) dem++;
			}
		}
		cout <<dem<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int ktra(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n);i++ ){
		if(n % i == 0) return 0;
	}
	return 1;
}
int main(){
	int a,b;
	cin >>a>>b;
	if(a > b){
		int tmp = a;
		a = b;
		b = tmp;
	}
	for(int i = a; i <= b; i++){
		if(ktra(i)) cout <<i<<" ";
	}
	return 0;
}


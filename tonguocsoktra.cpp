#include <bits/stdc++.h>
using namespace std;
bool tong(int n){
	long long s = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			s += i;
			if(n != i*i){
				s += n/i;
			}
		}
	}
	return s > n;
}

int main(){
	int a,b,dem=0;
	cin >> a>>b;
	for(int i = a; i <= b; i++){
		if(i % 2 == 0 || i % 3 ==0){
			if(tong(i)) dem++;
		}
	}
	cout <<dem<<endl;
}

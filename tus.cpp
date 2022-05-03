#include <bits/stdc++.h>
using namespace std;
bool check(int n){
	long long sum = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			sum += i;
			if(n/i!=i){
				sum += n/i;
			}
		}
	}
	return sum > n;
}
int main(){
	int a,b;
	cin >> a>>b;
	int dem = 0;
	for(int i = a; i <= b; i++){
		if(i % 2 == 0 || i % 3 == 0)
		if(check(i)){
			dem++;
		}
	}
	cout <<dem<<endl;
}

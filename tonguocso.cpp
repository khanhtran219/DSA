#include<bits/stdc++.h>
using namespace std;
bool check(int n){
	int s = 1;
	for(int i = 2; i < sqrt(n); i++){
		if(n%i==0) s += i + n/i;
	}
	int k = sqrt(n);
	if(k*k == n) s += sqrt(n);
	return s > n;
}
int main(){
	int a,b;
	cin >> a>> b;
	int dem = 0;
	for(int i = a; i <= b; i++){
			if(check(i)){
				cout <<i<<" ";
				dem++;
			}
	}
	cout <<dem<<endl;
	return 0;
}


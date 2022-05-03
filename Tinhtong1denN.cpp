#include<iostream>
using namespace std;
long long sum(int n){
	long long a = (long long)(n+1)*n/2;
	return a;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >> n;
		long long a = sum(n);
		cout<<a<<endl;
	}
	return 0;
}


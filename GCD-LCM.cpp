#include<iostream>
using namespace std;
int GCD(int a, int b){
	while(a != b){
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}
long long LCM(int a, int b){
	long long z = (long long)a*b;
	long long c = GCD(a,b);
	return z/c;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		cout <<LCM(a,b)<<" "<<GCD(a,b)<<endl;
	}
	return 0;
}


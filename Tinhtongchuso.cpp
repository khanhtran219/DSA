#include<iostream>
using namespace std;
int rutgon(int a){
	int s = a;
	while(s >= 10){
		a = s;
		s = 0;
		while(a){
			s += a %10;
			a /=10;
		}
	}
	return s;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int a;
		cin >>a;
		int b = rutgon(a);
		cout<<b<<endl;
	}
	return 0;
}


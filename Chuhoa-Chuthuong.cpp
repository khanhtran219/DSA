#include<iostream>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		char a;
		cin >>a;
		if(a >= 97) a-= 32;
		else a += 32;
		cout << a<<endl;
	}
	return 0;
}


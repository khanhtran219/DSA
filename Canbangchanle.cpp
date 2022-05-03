#include<iostream>
#include <math.h>
using namespace std;
int ktra(int n){
	int chan = 0,le = 0;
	while(n){
		if( (n % 10) % 2 == 0) chan++;
		else le++;
		n /= 10;
	}
	if(chan == le) return 1;
	else return 0;
}
int main(){
	int n;
	cin >> n;
	int dem = 0;
	for(int i = pow(10,n-1); i <= pow(10,n) - 2; i ++){
		if(ktra(i)) {
			dem++;
			cout<<i<<" ";
		}
		if(dem % 10 == 0) cout<<endl;
	}
	return 0;
}


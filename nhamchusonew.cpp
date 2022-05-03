#include <bits/stdc++.h>
using namespace std;
int lonNhat(int n){
	int s = 0, k = 0;
	while(n){
		if(n%10==5){
			s += 6*pow(10,k);
		}else s += (n%10)*pow(10,k);
		k++;
		n/=10;
	}
	return s;
}
int nhoNhat(int n){
	int s = 0, k = 0;
	while(n){
		if(n%10==6){
			s += 5*pow(10,k);
		}else s += (n%10)*pow(10,k);
		k++;
		n/=10;
	}
	return s;
}
int main(){
	int a,b;
	cin >> a>>b;
	cout <<nhoNhat(a)+nhoNhat(b)<<" "<<lonNhat(a)+lonNhat(b)<<endl;
}

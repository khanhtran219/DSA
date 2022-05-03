#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long  a, b;
		cin >> a>> b;
		long long s1= 0, s2 = 0, s3=0,s4=0;
		long long k = 0;
		while(a){
			if(a % 10 == 5){
				s1 += 6*pow(10,k);
				s2 += (a%10)*pow(10,k);
			}else if(a % 10 == 6){
				s1 += (a%10)*pow(10,k);
				s2 += 5*pow(10,k);
			}else {
				s1 += (a%10)*pow(10,k);
				s2 += (a%10)*pow(10,k);
			}
			a /= 10;
			k++;
		}
		k = 0;
		while(b){
			if(b % 10 == 5){
				s3 += 6*pow(10,k);
				s4 += (b%10)*pow(10,k);
			}else if(b % 10 == 6){
				s3 += (b%10)*pow(10,k);
				s4 += 5*pow(10,k);
			}else {
				s3 += (b%10)*pow(10,k);
				s4 += (b%10)*pow(10,k);
			}
			b /= 10;
			k++;
		}
		cout << s2+s4<<" "<<s1+s3<<endl;
	}
	return 0;
	
}


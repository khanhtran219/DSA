#include<bits/stdc++.h>
using namespace std;
int nguyento(int n){
	if(n<=1) return 0;
	for(int i = 2; i <=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int thuannghich(int n){
	int a = n,res = 0;
	while(a){
		res = res*10 + a%10;
		a/=10;
	}
	if(n==res) return 1;
	return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,dem =0;
		cin >>a>>b;
		for(int i = a; i <=b; i++){
			if(nguyento(i)&&thuannghich(i)) {
				cout <<i<<" ";
				dem++;
				if(dem%10==0) cout<<endl;
			}
		}
		cout <<endl;
		
	}
	return 0;
}


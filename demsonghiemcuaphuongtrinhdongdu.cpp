#include<bits/stdc++.h>
using namespace std;
int kt(int a){
	int b = sqrt(a);
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int b,p;
		cin >>b>>p;
		int k = (b-1)/p;
		int dem = 0;
		for(int i = 0; i <= k; i++){
			if(pow(sqrt(i*p+1),2)==i*p+1 ) dem++;
		}
		cout <<dem<<endl;
	}
	return 0;
}


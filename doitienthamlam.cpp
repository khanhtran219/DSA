#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[10]={1,2,5,10,20,50,100,200,500,1000};
		int i = 9,dem=0;
		while(n != 0){
			if(n < a[i]) i--;
			else{
				n -= a[i];
				dem++;
			}
		}
		cout <<dem<<endl;
	}
}

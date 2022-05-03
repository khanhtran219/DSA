#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int dem = 0, n,A[10]={1,2,5,10,20,50,100,200,500,1000};
		cin >> n;
		for(int i = 9; i >= 0; i--){
			while(n>=A[i]){
				dem++;
				n -= A[i];
			}
		}
		cout <<dem<<endl;
	}
	return 0;
}


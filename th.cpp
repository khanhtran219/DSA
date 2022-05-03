#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long P;
		cin >> P;
		if(P==1){
			cout<<"1"<<endl;
			continue;
		}
		int k =0,A[100000];
		for(int i = 9; i >=2; i--){
			while(P%i==0){
				A[k++]=i;
				P /= i;
			}
		}
		if(k==0||P>9) cout <<"-1";
		else for(int i = k-1; i>=0; i--) cout <<A[i];
		cout <<endl;
	}
	return 0;
}


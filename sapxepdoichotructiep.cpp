#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[10000];
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	int ok = 1,k = 1;
	while(ok){
		ok = 0;
		cout <<"Buoc "<<k<<": ";
			for(int j = k; j < n;j++){
				if(a[k-1] > a[j]) swap(a[k-1],a[j]);
			}
			for(int j = 0; j < n; j++){
				cout <<a[j]<<" ";
				if(j> 0 && a[j] < a[j-1]) ok = 1;
			}
			cout<<endl;
			k++;
	}
	return 0;
}


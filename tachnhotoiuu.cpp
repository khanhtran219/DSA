#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,a[1000005];
	cin >> n>>k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int x = a[0]+k, dem=1;
	for(int i = 1; i < n; i++){
		if(a[i] <= x){
			x = a[i]+k;
		}else{
			dem++;
			x = a[i]+k;
		}
	}
	cout <<dem<<endl;
	return 0;
}


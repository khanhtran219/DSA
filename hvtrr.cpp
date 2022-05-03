#include<bits/stdc++.h>
using namespace std;
int n,a[100],ok = 1;

void sinh(){
	int i = n - 1;
	while( i >= 1 && a[i] > a[i+1]){
		i--;
	}
	cout <<"i="<<i<<"; a[i]="<<a[i]<<"; ";
	if(i == 0) ok = 0;
	else{
		int j = n;
		while(a[i] > a[j]) j--;
		cout<<"k="<<j<<"; a[k]="<<a[j]<<"; ";
		swap(a[i],a[j]);
		for(int e=1; e <=n;e++) cout<<a[e]<<" ";
		cout <<" =>";
		reverse(a+i+1,a+n+1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ok = 1; 
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		while(ok){
			for(int i = 1; i <= n; i++){
				cout << a[i]<<" ";
			}
			cout <<endl;
			sinh();
		}
		cout << endl;
	}
	return 0;
}


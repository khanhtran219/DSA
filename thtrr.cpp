#include<bits/stdc++.h>
using namespace std;
void thKe(int a[],int n,int k){
	for(int i = 1; i <=k;i++){
		a[i] = i;
	}
	while(1){
		for(int i = 1; i <= k; i++) cout <<a[i]<<" ";
		cout<<endl;
		int i=k;
		while(i>0&&a[i]>=n-k+i)i--;
		cout <<"i="<<i<<"; ";
		if(i==0) return;
		a[i]=a[i]+1;
		cout<<"a[i]="<<a[i]<<" =>";
		for(int j=i+1; j<=k; j++){
			a[j] = a[i]+j-i;
		}
	}
}
int main(){
	int n,k,a[100];
	cin >> n>>k;
	thKe(a,n,k);
	return 0;
}


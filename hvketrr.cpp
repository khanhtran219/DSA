#include<bits/stdc++.h>
using namespace std;
void HvKe(int a[],int n){
	for(int i = 1; i <=n; i++) a[i] = i;
	while(1){
		for(int i=1; i <=n;i++) cout<<a[i]<<" ";
		cout <<endl;
		int i=n-1;
		while(i>0&&a[i]>a[i+1])i--;
		cout <<"i="<<i<<"; a[i]="<<a[i]<<"; ";
		if(i==0) return;
		int k=n;
		while(a[k]<a[i]) k--;
		cout<<"k="<<k<<"; a[k]="<<a[k]<<"; ";
		swap(a[i],a[k]);
		for(i=1; i <=n;i++) cout<<a[i]<<" ";
		cout <<" =>";
		int l=i+1; int r =n;
		while(l<r){
			swap(a[l],a[r]);
			l++;r--;
		}
	}
}

int main(){
	int n,a[1000];
	cin >> n;
	HvKe(a,n);
	return 0;
}


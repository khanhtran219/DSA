#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[100005],dem=0;
	cin >> n;
	for(int i = 0; i<n; i++) cin >> a[i];
	for(int i = 0; i < n-2; i++){
		if(a[i]%2==0){
			int k = i+1;
			while(k<n-1){
				if(k%2==1){
					for(int j = k+1; j < n; j++){
						if(a[j] % 2== 0 && a[j] < a[i]) dem++;
					}
					break;
				}
				k++;
			}
		}
	}
	cout <<dem;
	return 0;
}


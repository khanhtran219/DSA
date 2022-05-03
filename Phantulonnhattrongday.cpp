#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k,a[100005],s[100005] = {0};
		cin >> n>>k;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < k; i++){
			if(a[i] > s[0]) s[0] = a[i];
		}
		for(int i = k; i < n; i++){
                if(a[i] > a[i-k]){
                    for(int j = i-k+1; j <=i; j++){
                        if(a[j] > s[i-k+1]) s[i-k+1] =a[j];
                    }
                }else{
                    s[i-k+1] = max(s[i-k],a[i]);
                }
            }
            for(int i = 0; i < n-k+1; i++){
                cout<<s[i]<<" ";
            }
            cout<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,T[1000005],D[1000005];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> T[i]>>D[i];
	}
	for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(T[i] > T[j]){
                swap(T[i],T[j]);
				swap(D[i],D[j]);   
            }
        }
    }
    int sum = T[0] + D[0];
    for(int i = 1; i < n; i++){
    	if(sum > T[i]) sum += D[i];
    	else sum = T[i] + D[i];
	}
	cout << sum << endl;
	return 0;
}


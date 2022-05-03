#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,dem = 0, A[1005][3];
	cin >> n;
	for(int i = 0; i < n; i++){
		int dem1 = 0;
		for(int j = 0; j < 3; j++){
			cin >> A[i][j];
			if(A[i][j] == 1) dem1 ++;
		}
		if(dem1 > 1) dem++;
	}
	cout << dem<<endl;
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,A[100000],B[100000],X;
		cin >> n>>X;
		for(int i = 0; i < n; i++){
			cin >> A[i];
			B[i] = abs(X-A[i]);
		}
		int i, key, j;
	   for (i = 1; i < n; i++)
	   {
	       key = B[i];
	       j = i-1;
	       while (j >= 0 && B[j] > key)
	       {
	           B[j+1] = B[j];
	           A[j+1] = A[j];
	           j = j-1;
	       }
	       B[j+1] = key;
	       A[j+1] = A[i];
	   }
//		for(int i = 0; i < n-1; i++){
//			for(int j = i+1; j < n; j++){
//				if(B[i] > B[j]){
//					swap(B[i],B[j]);
//					swap(A[i],A[j]);
//				}
//				
//			}
//		}
		
		for(int i = 0; i < n; i++){
			cout << A[i]<<" ";
		}
		cout << endl;
	}
	return 0;
}


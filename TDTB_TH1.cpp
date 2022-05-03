#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,s1 = 0, s2=0;
	float A[105], min = 10, max = 0, sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> A[i];
		if(A[i] > max) max = A[i];
		if(A[i] < min) min = A[i];
		sum += A[i];
	}
	for(int i = 0; i < n; i++){
		if(A[i] == max) s1++;
		if(A[i] == min) s2++;
	}
	float TB;
	TB = (sum - s2*min - s1*max)/(n-s1-s2);
	cout << fixed <<setprecision(2) <<TB<<endl;
	return 0;
}


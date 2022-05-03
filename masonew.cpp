#include <bits/stdc++.h>
using namespace std;
int n,b[100];
char a[100];
bool used1[100]={false},used2[100]= {false};
void Try2(int i){
	for(int j = 1; j <= n; j++){
		b[i] = j;
		if(i == n){
			for(int l = 1; l <= n; l++) cout <<a[l];
			for(int l = 1; l <= n; l++) cout <<b[l];
			cout <<endl;
		}else Try2(i+1);
	}
}
void Try1(int i){
	for(char j = 'A'; j <= 'A' + n-1; j++){
		if(!used1[(int)j]){
			a[i] = j;
			used1[(int)j] = true;
			if(i == n){
				Try2(1);
			}else Try1(i+1);
			used1[(int)j] = false;
		}
	}
}
int main(){
	cin >> n;
	Try1(1);
}

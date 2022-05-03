#include <bits/stdc++.h>
using namespace std;
int a[100];
bool check(){
	if(a[1]==0&&a[2]==0) return false;
	if(a[3]==2||a[4]==0) return false;
	if(a[5]==0) return false;
	return true;
}
void in(){
	for(int i = 1; i <= 8; i++){
		if(i==3||i==5) cout <<"/";
		cout <<a[i];
	}
	cout <<endl;
}
void Try(int i){
	for(int j = 0; j <= 2; j+=2){
		a[i] = j;
		if(i==8){
			if(check()){
				in();
			}
		}
		else Try(i+1);
	}
}
int main(){
	Try(1);
}


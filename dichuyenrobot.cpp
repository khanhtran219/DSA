#include<bits/stdc++.h>
using namespace std;
int x=0,y=0;
void xuly(int k){
	if(k==0) y++;
	else if(k==1) x++;
	else if(k==2) y--;
	else x--;
}
int main(){
	int n;
	string s,a("GRBL");
	cin >> n;
	cin >>s;
	int k =0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <4; j++){
			if (s[i] == a[j]){
				k = (k+j) % 4;
				xuly(k);
				break;
			}
		}
	}
	cout <<x<<" "<<y;
	return 0;
}


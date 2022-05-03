#include<iostream>
#include <iomanip>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a;
		char s;
		char s1[15] ={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
		char s2[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
		cin >>a;
		int dem = 0;
		if(a == 101){
			for(int i = 0; i < 15; i++){
				cin >>s;
				if(s == s1[i]) dem++;
			}
		}else{
			for(int i = 0; i < 15; i++){
				cin >>s;
				if(s == s2[i]) dem++;
			}
		}
		cout << fixed <<setprecision(2) <<(float)dem*2/3<<endl;
	}
	return 0;
}


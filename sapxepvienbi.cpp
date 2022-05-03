#include <bits/stdc++.h>
using namespace std;
int slove(string a, int n){
        int i,j,max_idx,dem = 0;
        for(i = 0; i < n - 1; i++){
            max_idx = i;
            for(j = i+1; j < n; j++){
                if(a[j] > a[max_idx]) max_idx = j;
            }
            if(i != max_idx){
                swap(a[i],a[max_idx]);
                dem++;
            }
        }
        cout <<a<<endl;
        return dem;
    }
int main(){
	int n;
	string s;
	cin  >>n>>s;
	cout <<slove(s,n);
}

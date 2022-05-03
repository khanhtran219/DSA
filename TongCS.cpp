#include <bits/stdc++.h>
using namespace std;

int D[101][10001];

void qhd(){
	int i,j,k;
	for(i=0; i<=100; i++)
		for(j=0; j<=10000; j++)
			D[i][j] = 101;
	D[0][0] = 0;
	for(i=1; i<10; i++) D[i][i*i] = 1;

	for(i=1; i<=100; i++)
		for(j=i; j<=i*81; j++){
			for(k = 9; k > 0; k--){
				int kk=k*k;
				if(i>k && j>kk && D[i][j] > D[i-k][j-kk]+1)
					D[i][j]= D[i-k][j-kk]+1;
		}
	}
}

void inkq(int a, int b){
    if (a<=0 || a>100 || b<=0 || b>10000 || (D[a][b] >100)){
	  cout << -1 << endl;
	  return;
	}
	int i, k, n=D[a][b];
	for(k=n; k>0; k--){
		for(i=1; i<=9; i++)
			if(a>=i && b>=i*i && (D[a][b]==D[a-i][b-i*i]+1)){
				cout << i;
				a -= i;
				b -= i*i;
				break;
		 }
	}
	cout << endl;
}

main(){
    int t; cin >> t;
    qhd();
    while (t--){
        int a, b;
        cin >> a >> b;
        inkq(a,b);
    }
}

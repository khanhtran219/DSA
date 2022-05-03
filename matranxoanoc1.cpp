#include<stdio.h>
#include<math.h>
using namespace std;
long long f[100];
void init(){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i < 91; i++){
		f[i] = f[i-1] + f[i-2];
	}
}
int main(){
	init();
	long long n,A[105][105];
	scanf("%lld",&n);
	int k = 0, x = 0, y = n-1;
	while (k < n*n){
		for(int i = x; i < y ; i++){
			A[x][i] = f[k++];
		}for(int i = x; i < y ; i++ ){
			A[i][y] = f[k++];
		}for(int i = y; i > x; i++){
			A[y][i] = f[k++];
		}for(int i = y; i > x; i++){
			A[i][x] = f[k++];
		}
		x++; y--; 
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%lld",A[i][j]);
		}
		printf("\n");
	}

}


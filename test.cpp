#include<stdio.h>
int arr[505][505], F[505][505], n, m;

int min(int a, int b){
	if (a < b) return a;
	return b;
}

int max(int a, int b){
	if (a > b) return a;
	return b;
}

void minRoad()
{
	for (int i = 0; i <= m; i++){
		for (int j = 0; j <= n; j++){
			F[i][j] = 0;
		}
	}
	int ans = 0;
	for (int i = 0; i < m; i++) F[0][i] = arr[0][i];
	for (int i = 0; i < n; i++) F[i][0] = arr[i][0];

	for ( int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (arr[i][j] == 1) F[i][j] = min(F[i-1][j], min(F[i][j-1], F[i-1][j-1]))+1;
			else F[i][j] = 0;
			ans = max(ans, F[i][j]);
		} 
	}
	printf("%d", ans);
}

int main()
{
	int t; scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &n, &m);
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				scanf("%d", &arr[i][j]);
		minRoad();
		printf("\n");
	}
	return 0;
}



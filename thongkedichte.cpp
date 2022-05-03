#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin >>n >> m;
	int a[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> a[i][j];
		}
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==-1)
			{
				if(j!=0 && a[i][j-1]!=-1 )
				{
					sum+=a[i][j-1];
					a[i][j-1]=0;
				} 
				if(i!=0 && a[i-1][j]!=-1)
				{
					sum+=a[i-1][j];
					a[i-1][j]=0;
				}
				if(i!=0 && j!=0 && a[i-1][j-1]!=-1)
				{
					sum+=a[i-1][j-1];
					a[i-1][j-1]=0;
				}
				if(i!=n-1 && j!=m-1&&a[i+1][j+1]!=-1)
				{
					sum+=a[i+1][j+1];
					a[i+1][j+1]=0;
				}
				if(i!=n-1 && j!=0&& a[i+1][j-1]!=-1)
				{
					sum+=a[i+1][j-1];
					a[i+1][j-1]=0;
				}
				if(i!=0 && j!=m-1&& a[i-1][j+1]!=-1)
				{
					sum+=a[i-1][j+1];
					a[i-1][j+1]=0;
				}
				if(j!=m-1&& a[i][j+1]!=-1)
				{
					sum+=a[i][j+1];
					a[i][j+1]=0;
				}
				if(i!=n-1&& a[i+1][j]!=-1)
				{
					sum+=a[i+1][j];
					a[i+1][j]=0;
				}
			}
		}
	}
	cout << sum;
}

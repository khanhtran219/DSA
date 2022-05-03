#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n,m; cin >> n >> m;
		vector<int> a;
		vector<int> d;
		int x,max=INT_MIN;
		for(int i=0;i<n;i++)
		{
			cin >> x;
			if(x>max) max=x;
			if(x<0) a.push_back(x);
			else d.push_back(x);
		}
		int flag=1;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]==max && flag==1)
			{
				cout << m << " ";
				flag=2;
			}
			cout << a[i] << " ";
		}
		flag=1;
		for(int i=0;i<d.size();i++)
		{
			if(d[i]==max && flag==1)
			{
				cout << m << " ";
				flag=2;
			}
			cout << d[i] << " ";
		}
		cout << endl;
	}
}

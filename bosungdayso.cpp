#include<bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin >> n;
    int a[n+5]={0};
    int b[n+5];
    for(int i=0;i<n;i++)
    {
    	cin >> b[i];
    	a[b[i]]++;
	}
	int k=0; 
	for(int i=1;i<=b[n-1];i++)
	{
		if(a[i]==0)
		{
			 cout << i << endl;
			 k=1; 
		}
	}
    if(k==0) cout << "Excellent!";
}

#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
    int n1=n;
		int mang[1000];
		for(int i=0;i<n;i++){
      cin>>mang[i];
    }
    sort(mang,mang+n);
    int k,j=0;
    if(n%2==1) k=n/2+1;
    else k=n/2;
    for(int i=0;i<k;i++){
      cout<<mang[n-1]<<" ";
      n--;
      if(n1%2==1 && i==k-1) break;
      cout<<mang[j]<<" ";
      j++;
    }
		cout << endl;
	}
}

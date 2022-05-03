#include <iostream>
#include<algorithm>
using namespace std;
int cmp(int a,int b){
  return a<b;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,x;
		cin >> n;
		int mang[100005],mang2[100005],mang3[100005];
		for(int i=0;i<n;i++){
      		cin>>mang[i];
    }
    sort(mang,mang+n,cmp);
    if(n%2==1) x=n/2+1;
    else x=n/2;
    int k=x;
    int n1=n;
    for(int i=0;i<x;i++){
      cout<<mang[i]<<" ";
      if(n%2==1 && i==x-1) break;
      cout<<mang[k]<<" ";
      k++;
    }
		cout << endl;
	}
}

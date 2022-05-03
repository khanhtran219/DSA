#include <iostream>
#include<algorithm>
using namespace std;
long long  mang[1000000],mang2[1000000];
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,m;
		cin >> n >>m;
		for(int i=0;i<n;i++){
      cin>>mang[i];
    }
    for(int i=0;i<m;i++){
      cin>>mang2[i];
    }
    sort(mang,mang+n);
    sort(mang2,mang2+n);
		cout << mang[n-1]*mang2[0] <<endl;
	}
  return 0;
}

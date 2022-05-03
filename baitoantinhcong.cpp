#include<bits/stdc++.h>

using namespace std;

int main()
{
	string ten,chuc;
	int luong,ngay;
	getline(cin,ten);
	cin >> luong >> ngay;
	cin >> chuc;
	int a=luong*ngay;
	int b=0,c;
	if(ngay>=22 && ngay<=25)
	{
		b=a/10;
	}
	if(ngay>25) b=a*20/100;
	if(chuc=="GD") c=250000;
	if(chuc=="PGD") c=200000;
	if(chuc=="TP") c=180000;
	if(chuc=="NV") c=150000;
	cout << "NV01 "<< ten << a << " " << b << " " << " " << c << " " <<a+b+c;
}

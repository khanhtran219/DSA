
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include<ctime>
#include <vector>
#include "windows.h" 
using namespace std;



void SetColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}


int main()
{
	string ngiu;
	while (true)
	{
		system("cls");
		cout << endl << endl;
		cout << "\t\tNHAP PASSWORD? ";
		getline(cin, ngiu);
		if (ngiu == "01/10/2002")
		{
			cout << "\t\t---CHINH XAC !---" << endl <<endl;
			cout << "\t\tLOADING 10%..." << endl;
			Sleep(1000);
			cout << "\t\tLOADING 20%..." << endl; Sleep(1000);
			cout << "\t\tLOADING 30%..." << endl; Sleep(1000);
			cout << "\t\tLOADING 40%..." << endl; Sleep(1000);
			cout << "\t\tLOADING 50%..." << endl; Sleep(1000);
			cout << "\t\tLOADING 60%..." << endl; Sleep(1000);
			cout << "\t\tLOADING 70%..." << endl; Sleep(1000);
			cout << "\t\tLOADING 80%..." << endl; Sleep(1000);
			cout << "\t\tLOADING 90%..." << endl; Sleep(1000);
			cout << "\t\tLOADING 100%" << endl << endl;

			vector <int> A;
			A.push_back(7);
			A.push_back(12);
			A.push_back(14);
			A.push_back(10);
			if(true)
			{
				int i = 0;
				SetColor(A.at(i++ % A.size()));

				ifstream file;
				file.open("E:/1.txt", ios_base::in); 
				string line;
				while (getline(file, line)) {
					cout << line << endl;
					Sleep(30); 
				}
				file.close();

				SetColor(A.at(i++ % A.size()));

				cout << "\t\tCHUC " ; Sleep(200);
				cout << "BAN " ; Sleep(200);
				cout << "TUOI " ; Sleep(200);
				cout << "MOI " ; Sleep(200);
				cout << "BOT " ; Sleep(200);
				cout << "TRE " ; Sleep(200);
				cout << "TROU, " << endl; Sleep(200);
				cout << "\t\tSOM " ; Sleep(200);
				cout << "TIM " ; Sleep(200);
				cout << "DUOC " ; Sleep(200);
				cout << "CHANG " ; Sleep(200);
				cout << "TRAI " ; Sleep(200);
				cout << "CUA " ; Sleep(200);
				cout << "DOI " ; Sleep(200);
				cout << "MINH!!! " ; 
			}
			_getch();
		}
		else
		{
			cout << "\t\tSAI ROI ;((" << endl << endl;
			system("pause");
		}
	}
}

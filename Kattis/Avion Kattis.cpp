// Avion Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string.h>

using namespace std;

int main()
{
	char a[100];
	int ok = 0;
	int nr = 1;
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		for (int j = 0; j < strlen(a); j++)
		{
			if (a[j] == 'F' && a[j + 1] == 'B' && a[j + 2] == 'I')
			{
				cout << nr<<endl;
				ok = 1;
			}
		}
		nr++;
	}
	if (ok == 0)
		cout << "HE GOT AWAY!";
}


// Honour Thy (Apaxian) Parent Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>

using namespace std;
int main()
{
	char a[50], b[50];
	cin >> a;
	cin >> b;
	if (a[strlen(a)-1] == 'x' && a[strlen(a) - 2] == 'e')
		{
		strcat_s(a, b);
		}
		else
			if (a[strlen(a)-1] == 'e')
			{
				strcat_s(a,"x");
				strcat_s(a,b);
			}
			else
				if (a[strlen(a)-1]== 'a' || a[strlen(a)-1] == 'i' || a[strlen(a)-1] == 'o' || a[strlen(a)-1] == 'u')
				{
					a[strlen(a)-1] = 'e';
					strcat_s(a, "x");
					strcat_s(a, b);
				}
				else
				{
					strcat_s(a, "ex");
					strcat_s(a, b);
				}
	cout << a;
}

// Hanging Out on the Terrace Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int l, x,b,nr=0;
	char a[201];
	int nop = 0;
	cin >> l >> x;
	for (int i = 0; i < x; i++)
	{
		cin >> a >> b;
		if (strcmp(a,"enter")==0 && (nop + b <= l))
		{
			nop = nop + b;
		}
		else if (strcmp(a,"enter")==0 && (nop + b > l))
			nr++;
		if (strcmp(a,"leave")==0)
			nop = nop - b;
	}
	cout << nr;
}

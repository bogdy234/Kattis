// Mixed Fractions Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
	int a, b,cat,rest;
	while(1)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
		{
			break;
		}
		if (b == 0)
		{
			cout << "Numitorul nu poate fi 0";
			continue;
		}
			cat = a / b;
			rest = a % b;
			cout << cat << " " << rest << " " << "/" << " " << b<<"\n";
	} 
}


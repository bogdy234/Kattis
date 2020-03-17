// Bela Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int n,sum=0;
	char b;
	char x1, x2;
	cin >> n >> b;
	for (int i = 0; i < 4 * n; i++) {
		cin >> x1 >> x2;
		if (x1 == 'A')
			sum = sum + 11;
		else if (x1 == 'K')
			sum = sum + 4;
		else if (x1 == 'Q')
			sum = sum + 3;
		else if (x1 == 'T')
			sum = sum + 10;
		else 
			if (x1 == 'J')
			{
				if (x2 == b)
					sum = sum + 20;
				else sum = sum + 2;
			}
		if (x1 == '9')
		{
			if (x2 == b)
				sum = sum + 14;
		}
	}
	cout << sum;
}

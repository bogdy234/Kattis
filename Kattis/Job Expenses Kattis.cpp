// Job Expenses Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int n, sum = 0, x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x < 0)
			sum = sum + x;
	}
	cout << -sum;
}

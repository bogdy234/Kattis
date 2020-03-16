// Line Them Up Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
	int n,nr=0,nr1=0;
	char a[100][100];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n-1; i++)
	{
		if (strcmp(a[i],a[i + 1])<0)
			nr++;
		if (strcmp(a[i], a[i + 1]) > 0)
			nr1++;

	}

	if (nr == n - 1)
		cout << "INCREASING";
	else if (nr1 == n - 1)
		cout << "DECREASING";
	else cout << "NEITHER";
}
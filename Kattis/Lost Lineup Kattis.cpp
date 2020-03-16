// Lost Lineup Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int n,kids[100],nr[100];
	cin >> n;
	nr[0] = -1;
	kids[0] = -1;
	for (int i = 1; i < n; i++)
	{
		cin >> kids[i];
		nr[i] = kids[i];
	}
	
	for (int i=0;i<n-1;i++)
		for (int j=i+1;j<n;j++)
			if (nr[i] > nr[j])
			{
				int aux = nr[i];
				nr[i] = nr[j];
				nr[j] = aux;
			}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (nr[i] == kids[j])
			{
				printf("%d ", j+1);
			}
		}
	 }

}
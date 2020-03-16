// Quick Estimates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char x[102];
		scanf_s("%s",x);
		printf("%d\n", strlen(x));
	}
}

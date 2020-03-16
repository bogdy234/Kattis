// Odd Man Out.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,g,aux;
	long long int c[1000];
	scanf_s("%d", &n);
	for (int con = 0; con < n; con++)
	{
		scanf_s("%d", &g);
		for (int i = 0; i < g; i++)
			scanf_s("%lli", &c[i]);
		for (int i=0;i<g-1;i++)
		  for (int j=i+1;j<g;j++)
			  if (c[i] > c[j])
			  {
				  aux = c[i];
				  c[i] = c[j];
				  c[j] = aux;
			  }
		for (int i=0;i<g;i=i+2)
			if (c[i] != c[i + 1])
			{
				printf("%lli\n", c[i]);
				break;
			}
	}
}

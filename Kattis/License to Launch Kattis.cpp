// License to Launch Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>

using namespace std;


int minim(int a[],int n,int *d) 
{
	int minim=INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < minim)
		{
			minim = a[i];
			(*d) = i;
		}
	}
	return minim;
}

int main()
{
	int n,junk[100000],nr=0,rez;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> junk[i];
	minim(junk, n, &rez);
	cout << rez;
}
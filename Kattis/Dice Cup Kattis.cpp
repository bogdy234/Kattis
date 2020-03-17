// Dice Cup Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int n, m,minim,other;
	cin >> n >> m;
	if (n > m)
	{
		minim = m;
		other = n;
	}
	else if (n <= m)
	{
		minim = n;
		other = m;
	}
	if (m == n)
		cout << m + 1;
	else {
		for (int i = minim + 1; i <= other + 1; i++)
			cout << i<<endl;
	}
}

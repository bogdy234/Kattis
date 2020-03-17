// Cetvrta Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int a, b, c, a1, b1, c1;
	cin >> a >> a1 >> b >> b1 >> c >> c1;
	if (a != b && a != c)
		cout << a<<" ";
	else if (b != a && b != c)
		cout << b<<" ";
	else if (c != a && c != b)
		cout << c<<" ";
	if (a1 != b1 && a1 != c1)
		cout << a1<<" ";
	else if (b1 != a1 && b1 != c1)
		cout << b1<<" ";
	else if (c1 != a1 && c1 != b1)
		cout << c1<<" ";
}

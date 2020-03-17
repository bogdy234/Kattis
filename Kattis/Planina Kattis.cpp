// Planina Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int power(int a,int b) {
	int rez=1;
	for (int i = 0; i < b; i++)
		rez = rez * a;
	return rez;
}

int main()
{
	int n, solution;
	cin >> n;
	solution = power(power(2, n)+1, 2);
	cout << solution;
}
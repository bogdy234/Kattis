// The Easiest Problem Is This One Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int sumcif(int x) {
	int sum = 0;
	while (x) {
		sum = sum + x % 10;
		x = x / 10;
	}
	return sum;
}

int main()
{
	unsigned int n;
	unsigned int p;
	do {
		cin >> n;
		for (p = 11;; p++)
		{
			if (sumcif(n) == sumcif(n * p))
				break;
		}
	  if (n!=0)
		cout << p<<endl;
	} while (n != 0);
}
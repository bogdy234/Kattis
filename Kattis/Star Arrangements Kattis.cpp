// Star Arrangements Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

bool functie(int x,int y,int rez) {
	while (rez > 0) {
		rez = rez - x;
		if (rez == 0)
			break;
		rez = rez - y;
	}
	if (rez == 0)
		return 1;
	if (rez < 0)
		return 0;
}

int main()
{
	int s;
	cin >> s;
	cout << s << ":" << endl;
	for (int i = 2; i <= s/2+1; i++) {
		if (functie(i,i-1,s) == true)
		{
			cout << i << "," << i - 1 << endl;
		}
		if (functie(i, i,s) == true) {
			cout << i << "," << i << endl;
		}
	}
}

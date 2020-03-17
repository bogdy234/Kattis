// Heart Rate Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int n, b;
	double p,bpm,x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b >> p;
		x = 60 / p;
		bpm = b * x;
		cout << bpm - x << " " << bpm << " " << x + bpm<<endl;
	}
}


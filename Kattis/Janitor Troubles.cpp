// Janitor Troubles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b, c, d;
	double s,rez;
	cin >> a >> b >> c >> d;
	s = (double)(a + b + c + d) / 2.0;
	rez = sqrt((s - a) * (s - b) * (s - c) * (s - d));
	printf("%.6lf", rez);
}

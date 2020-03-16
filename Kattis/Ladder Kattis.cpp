// Ladder Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
# define M_PI 3.14159265358979323846
using namespace std;

int main()
{
	int h, v;
	int rez;
	cin >> h >> v;
	double degree = (v * M_PI) / 180;
	rez = h / (sin(degree));
	cout << rez+1;
}

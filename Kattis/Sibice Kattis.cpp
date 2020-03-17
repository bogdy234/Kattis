// Sibice Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int n, weight, height,x;
	cin >> n >> weight >> height;
	int diagonal = sqrt(weight * weight + height * height);
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x <= diagonal)
			cout << "DA"<<endl;
		else cout << "NE"<<endl;
	}
}

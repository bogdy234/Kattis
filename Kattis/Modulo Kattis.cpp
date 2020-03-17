// Modulo Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	unsigned int a[11],vector_solutie[11];
	int k = 0,ok,nr=0;

	for (int i = 0; i < 10; i++) {
		cin >> a[i];
		a[i] = a[i] % 42;
	}

	for (int i = 0; i < 10; i++) {
		ok = 1;
		for (int j = 0; j < k; j++) {
			if (a[i] == vector_solutie[j])
				ok = 0;
		}
		if (ok == 1) {
			vector_solutie[k] = a[i]; k++;
		}
		else {
			vector_solutie[k] = -1; k++;
		}
	}
	for (int i = 0; i < k; i++) {
		if (vector_solutie[i] != -1)
			nr++;
	}
	cout << nr;
}

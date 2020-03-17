// Sum Squared Digits Function Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int transfB(int x,unsigned int b,unsigned int rest[]){
	int i = 0;
	while (x!=0)
	{
		rest[i] = x % b;
		i++;
		x = x / b;
	}
	return i;
}

int main()
{
	int sum;
	unsigned int rest[200000];
	int x = 16;
	int length;
	int nrcazuri,dataset,numar;
	unsigned int baza;
	cin >> nrcazuri;
	for (int contor = 0; contor < nrcazuri; contor++)
	{
		sum = 0;
		cin >> dataset>>baza>>numar;
		length = transfB(numar, baza,rest);
		for (int i = length - 1; i >= 0; i--)
		{
			sum = sum + (rest[i]*rest[i]);
		}
		cout <<dataset<<" "<<sum<<endl;
	}

}

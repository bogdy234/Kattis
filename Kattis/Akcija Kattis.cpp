// Akcija Kattis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void swap(int &a,int &b)
{
	int aux;
	aux = a;
	a = b;
	b = aux;
}

int partition(long int arr[], int low, int high)
{
	int pivot = arr[high]; // pivot  
	int i = (low - 1); // Index of smaller element  

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than the pivot  
		if (arr[j] > pivot)
		{
			i++; // increment index of smaller element  
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1],arr[high]);
	return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(long int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before  
		// partition and after partition  
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int main()
{
	long int n,a[100000],sum=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	quickSort(a, 1,n);

	for (int i = 1; i <= n-(n%3); i++)
		{
			if (i % 3 != 0)
				sum = sum + a[i];
		}
	for (int i = n - (n % 3) + 1; i <= n; i++)
		sum = sum + a[i];
		

	cout << sum;
	return 0;
}

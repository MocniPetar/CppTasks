#include<iostream>
using namespace std;

int fib(int*, int);

int main() {

	int n;
	cout << "Enter a number for the size of the array: ";
	cin >> n;

	int* array = new int[n];

	//Petlja se ponavlja dok je velicina niza manja od 1
	while (n <= 1) {
		cout << "Can not generate a series of numbers starting from " << n << endl;
		cout << "Enter a number for the size of the array: ";
		cin >> n;
	}

	//Zadaju se prva dva elementa na 1
	*(array + 0) = 1; *(array + 1) = 1;
	if (n >= 2)
		fib(array,n);

	for (int i = 0; i < n; i++)
		cout << *(array + i) << " ";

	delete[] array;		
	return 0;
}

//Ova funkcija sluzi za ispunit niz pomocu formule za fibonnacijev niz
int fib(int* array, int n) {

	int n_1 = 0, n_2 = 1, n_3;

	for (int i = 1; i < n; i++) {
		n_3 = n_1 + n_2;
		n_1 = n_2;
		n_2 = n_3;

		*(array + i) = n_3;
	}

	return *array;
}
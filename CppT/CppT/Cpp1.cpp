#include<iostream>
using namespace std;

#define N (6)

int& checkingForNumBiggerThenZero(int(&)[N]);

int main() {

	int array[N]{0,0,0,1,0,0};
	int& b = checkingForNumBiggerThenZero(array); // Refrenca na niz

	b = 0;
	
	for (int i : array) { // for each petlja za ispis
		cout << i << " ";
	}
	return 0;
}

int& checkingForNumBiggerThenZero(int (&array)[N]) {

	for (int &i : array) {
		if (i > 0)
			return i;
	}
}
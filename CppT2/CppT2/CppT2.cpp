#include<iostream>
using namespace std;

#define EXIT (0)

void unosNiza(int*, int);
void ispisNiza(int*, int);
void checkingAndRemovingDuplicatesFromArray(int*, int, int*);

int main() {

	int sizeOfArray;
	int* p;
	cout << "Enter a number which will be the size of the list: ";
	cin >> sizeOfArray;

	p = &sizeOfArray; // Pokazivac na varijablu koja sadrzi velicinu niza
	int* array = new int [sizeOfArray];
	
	cout << "Enter values to be stored in the array:\n";
	unosNiza(array, sizeOfArray);
	cout << "Array print: ";
	ispisNiza(array, sizeOfArray);

	checkingAndRemovingDuplicatesFromArray(array, sizeOfArray, p);
	cout << "Array with removed duplicates: ";
	ispisNiza(array, sizeOfArray);

	delete [] array;
	return EXIT;
}

//Funkcija za unos vrijednosti na mjestu elemenata u niz do zeljene velicine
void unosNiza(int* array,int sizeOfArray) {

	for (int i = 0; i < sizeOfArray; i++)
		cin >> array[i];
}

void ispisNiza(int* array, int sizeOfArray) {

	for (int i = 0; i < sizeOfArray; i++)
		cout << *(array + i) << " ";
}

void checkingAndRemovingDuplicatesFromArray(int* array, int sizeOfArray,int* p) {

	int DuplicateKey = NULL;
	int counter = 0;
	int i = 0;
	while (i < *p) {
		DuplicateKey = *(array + i); //Spremanje vrijednosti niza redom od 0 do n elementa za provjeru
		int j = 0;
		for (j = 0; j < *p; j++) {
			if (*(array + j) == DuplicateKey) { // Provjera jeli je kljuc isti kao i element niza
				counter++;
				if (counter > 1) { //U slucaju da se pojavi element koji je isti kao kljuc vise puta pomicemo vrijednosti u nizu desno i smanjujemo velicinu niza
					*p = *p - 1;
					for (int a = j; a < *p; a++)
						*(array + a) = *(array + a + 1);
				}
			}
		}
		counter = 0;
		i++;
	}
	cout << endl;
}
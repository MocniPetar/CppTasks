#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> vec;
	int suma = 0;

	vec = { 2,43,1,3,7,52,4,231,5 };

	sort(vec.begin(), vec.end());
	vec.insert(vec.begin()+1, 0);

	for (int i = 0; i < vec.size() - 1; i++) {
		suma += vec[i];
	}

	cout << "Suma: \n\t" << suma << endl;
	cout << "Ispis:\n\t";
	for (auto& i : vec)
		cout << i << " ";
	cout << endl;

	vec.clear();
	return 0;
}

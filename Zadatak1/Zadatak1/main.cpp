#include <iostream>
#include <vector>
#include "Vektor.hpp"
using namespace std;

int main()
{
	vector<int> vec;
	int from = 0;
	int to = 0;

	cout << "Unesite granice intervala:" << endl;
	cin >> from >> to;
	element_interval(vec, from, to);

	vec.clear();
	return 0;
}



#include "Vektor.hpp"

void add_element(std::vector<int>& vec, int n) {
	vec.push_back(n);
}	

void element_interval(std::vector<int>& vec, int from, int to) {
	
	int n = 0;
	std::cout << "Unesite elemente:" << std::endl;
	while (true) {
		std::cin >> n;
		if (n >= from && n <= to)
			add_element(vec, n);
		else {
			print_vector(vec);
			break;
		}
	}
}

void print_vector(std::vector<int>& vec) {
	
	std::cout << "Vector: " << "\n\t";
	for (auto &i : vec)
		std::cout << i << " ";
	std::cout << std::endl;

}
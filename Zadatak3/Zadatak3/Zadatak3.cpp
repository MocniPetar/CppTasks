#include <iostream>
#include <string>
using namespace std;

int substringCounter(string s, string substring);

int main()
{
	string s = "This is a string of text, it is used to check how many substrings from is present in the text.";
	string substring;
	cout << s << endl;

	cout << "Enter a substring from the given string:\n\t";
	cin >> substring;
	cout << "\nThe entered substring '" << substring << "' is shown "<< substringCounter(s,substring) << " times." << endl;

	s.erase();
	substring.erase();
	return 0;
}

int substringCounter(string s, string substring)
{
	
	string check;
	string I;
	int counter = 0, num = 0, from = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ' && s[i] != '.')
			++num;
		else {
			check = s.substr(from, num + 1);
			check.resize(substring.length());
			if (check.compare(substring) == 0)
				counter++;
			num = 0;
			from = i+1;
		}
	}

	return counter;
}
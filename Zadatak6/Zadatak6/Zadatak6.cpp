#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

void fun(vector<string>& vec, int n);
void toPigLatin(string& str);

int main()
{
	srand((unsigned)time(NULL));

	vector<string> vec;
	string s;
	int n = 0;

	cout << "Type in a sentence and press enter to add it to the vector." << endl;
	cout << "To stop type 0 and press enter." << endl;
	while (getline(cin, s)) {
		if (s == "0")
			break;
		vec.push_back(s);
	}

	if (vec.size() != 0) {
		if (vec.size() > 1)
			n = (rand() % vec.size());

		fun(vec, n);
	}
	else
		cout << "Vector size is 0!!" << endl;

	vec.clear();
	s.erase();
	return 0;
}

void fun(vector<string>& vec, int n)
{
	string s;
	int pos = 0;
	int count = 0;

	for (int i = 0; i < vec[n].length(); i++) {
		if (vec[n][i] == ' ' || vec[n][i] == '.' || vec[n][i] == '?' || vec[n][i] == '!') {
			s = vec[n].substr(pos, count);
			toPigLatin(s);
			if (vec[n][i] != ' ')
				cout << s + vec[n][vec[n].length() - 1];
			else
				cout << s + " ";
			count = 0;
			pos = i + 1;
		}
		else {
			count++;
		}
	}
	cout << endl;
}

void toPigLatin(string& str)
{
	string s;

	if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u' || str[0] == 'A' || str[0] == 'E' || str[0] == 'I' || str[0] == 'O' || str[0] == 'U')
		str = str + "hay";
	else {
		int i = 0;
		while (true) {
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
				break;
			i++;
		}
		for (int j = 0; j < i; j++) {
			s.insert(s.end(), str[j]);
		}
		for (int j = 0; j < i; j++) {
			str.erase(str.begin());
		}
		str = str + s + "ay";
	}
}

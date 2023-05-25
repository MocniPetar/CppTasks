#include "TextFixer.hpp"

void fixText(std::string& text)
{
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == ',' || text[i] == '?' || text[i] == '!' || text[i] == '.') {
			if (text[i - 1] == ' ') {
				char c;
				c = text[i];
				text[i] = text[i - 1];
				text[i - 1] = c;
			}
		}
	}

	textFunction(text);
}

void textFunction(std::string& text)
{
	int a = 1;
	int countleft = 0;
	int countright = 0;

	for (int i = 0; i < text.length(); i++) {
		if (text[i] == ',' || text[i] == '?' || text[i] == '!' || text[i] == '.') {
			if (text[i + 2] == ' ') {
				while (text[i + a] == ' ') {
					if (a > 1)
						countright++;
					a++;
				}
				rightSide(text, countright, i);
				a = 1;
			}
			while (text[i - a] == ' ') {
				countleft++;
				a++;
			}
			leftSide(text, countleft, i);
			countleft = 0;
			countright = 0;
			a = 1;
		}
	}
}

void leftSide(std::string& text, int n, int from)
{
	for (int i = 0; i < n; i++) {
		for (int j = from - i - 1; j < text.length(); j++) {
			char c;
			c = text[j];
			text[j] = text[j + 1];
		}
	}
}

void rightSide(std::string& text, int n, int from)
{
	for (int i = 0; i < n; i++) {
		for (int j = from + i + 1; j < text.length(); j++) {
			char c;
			c = text[j];
			text[j] = text[j + 1];
		}
	}
}
#include <iostream>
#include <string>
#include "TextFixer.hpp"
using namespace std;

int main()
{
	string text = "Ja bih   ,ako ikako mogu  ,  napisala ovu recenicu ispravno .  ";

	fixText(text);
	cout << text << endl;

	return 0;
}
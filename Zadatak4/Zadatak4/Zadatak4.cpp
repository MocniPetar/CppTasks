#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void flipAndStore(string s, vector<string>& vec);
void printVector(vector<string>& vec);

int main()
{
    vector<string> vecStr;
    string s;

    cout << "Enter strings. To stop pres ctrl + z and enter:" << endl;
    while (cin >> s) {
        flipAndStore(s, vecStr);
    }
    printVector(vecStr);
    
    vecStr.clear();
    s.erase();
    return 0;
}

void flipAndStore(string s, vector<string>& vec)
{
    reverse(s.begin(), s.end());
    vec.push_back(s);
    sort(vec.begin(), vec.end());
}

void printVector(vector<string>& vec)
{
    for (string& i : vec)
        cout << i << " ";
    cout << endl;
}
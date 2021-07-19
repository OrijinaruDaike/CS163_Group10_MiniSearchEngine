#include"function.h"

bool isNumber(const string& str)
{
    for (char const& c : str) {
        if (isdigit(c) == 0) return false;
    }
    return true;
}

bool isAlphabet(const string& str)
{
	for (char const& c : str) {
		if (isalpha(c) == 0) return false;
	}
	return true;
}

string intToString(int num)
{
	stringstream ss;
	ss << num;
	string out_string = ss.str();
	cout << out_string << "\n";
}

string floatToString(float num)
{
	stringstream ss;
	ss << num;
	string out_string = ss.str();
	out_string.empty() ? cout << "empty\n" : cout << out_string << "\n";
	return out_string;
}

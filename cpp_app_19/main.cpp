#include <iostream>
#include <string>

using namespace std;

string ReplaceDotWithExclamation(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '.')
		{
			str[i] = '!';
		}
	}
	return str;
}

int main()
{
	cout << "Enter a string: ";
	string str;
	getline(cin, str);
	cout << "The string replaced with exclamation marks: " << ReplaceDotWithExclamation(str) << endl;
}
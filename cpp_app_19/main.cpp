#include <iostream>
#include <string>

using namespace std;

string SearchCharacter(string str, char ch) 
{
	string result = "";
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ch) 
		{
			result += to_string(i) + " ";
		}
	}
	return result;
}

int main()
{
	string str;
	char ch;
	cout << "Enter a string: ";
	getline(cin, str);
	cout << "Enter a character: ";
	cin >> ch;
	cout << "The character " << ch << " is found at index: " << SearchCharacter(str, ch) << endl;
	return 0;
}
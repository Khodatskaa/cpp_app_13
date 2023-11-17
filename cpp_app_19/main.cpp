#include <iostream>
#include <string>

using namespace std;

string InsertCharacter(string str, char ch, int pos)
{
	string result = "";
	for (int i = 0; i < str.length(); i++)
	{
		if (i == pos)
		{
			result += ch;
		}
		result += str[i];
	}
	return result;
	
}

int main()
{
	cout << "Enter a string: ";
	string str;
	getline(cin, str);
	cout << "Enter a character: ";
	char ch;
	cin >> ch;
	cout << "Enter a position: ";
	int pos;
	cin >> pos;
	cout << "Result: " << InsertCharacter(str, ch, pos) << endl;

	return 0;
}
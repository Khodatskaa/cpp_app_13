#include <iostream>
#include <string>

using namespace std;

string RemoveAllOccurrences(string str, char ch)
{
	string result = "";
	for (int i = 0; i < str.length(); i++) 
	{
		if (str[i] != ch) 
		{
			result += str[i];
		}
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
	cout << "Result: " << RemoveAllOccurrences(str, ch) << endl;
	
	return 0;
}

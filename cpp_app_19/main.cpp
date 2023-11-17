#include <iostream>
#include <string>

using namespace std;

string removeCharacterAt(string str, size_t position) 
{
    if (position >= str.length()) 
    {
        cout << "Invalid position. Cannot remove character." << endl;
        return str;
    }

    str.erase(position, 1);

    return str;
}

int main() 
{
    string input;
    size_t position;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Enter the position of the character to remove: ";
    cin >> position;

    string result = removeCharacterAt(input, position);

    cout << "Result after removing the character: " << result << endl;

    return 0;
}

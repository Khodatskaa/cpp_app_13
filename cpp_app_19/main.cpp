#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& str)
{
    string copy = str;
    
    string reversed;
    for (int i = static_cast<int>(copy.length()) - 1; i >= 0; --i) 
    {
        reversed += copy[i];
    }

    return copy == reversed;
}

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input))
    {
        cout << "The string is a palindrome" << endl;
    }
    else 
    {
        cout << "The string is not a palindrome" << endl;
    }

    return 0;
}

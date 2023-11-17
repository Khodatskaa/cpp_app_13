#include <iostream>
#include <string>

using namespace std;

void countCharacters(const string& str, int& letterCount, int& digitCount, int& otherCount) 
{
    letterCount = digitCount = otherCount = 0;

    for (char ch : str) 
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
        {
            ++letterCount;
        }
        else if (ch >= '0' && ch <= '9') 
        {
            ++digitCount;
        }
        else 
        {
            ++otherCount;
        }
    }
}

int main() 
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    int letterCount, digitCount, otherCount;

    countCharacters(input, letterCount, digitCount, otherCount);

    cout << "Number of letters: " << letterCount << endl;
    cout << "Number of digits: " << digitCount << endl;
    cout << "Number of other characters: " << otherCount << endl;

    return 0;
}
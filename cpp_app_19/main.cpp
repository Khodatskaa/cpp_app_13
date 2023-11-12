#include <iostream>
using namespace std;

void replaceSpacesWithTabs(char* inputString) 
{
    char space = ' ';
    char tab = '\t';

    for (int i = 0; inputString[i] != '\0'; ++i) 
    {
        if (inputString[i] == space)
        {
            inputString[i] = tab;
        }
    }
}

int main() 
{
    const int maxStringLength = 1000;
    char inputString[maxStringLength];

    cout << "Enter string: ";

    int i = 0;
    while (i < maxStringLength - 1)
    {
        char character = cin.get();
        if (character == '\n') 
        {
            inputString[i] = '\0'; 
            break;
        }
        inputString[i] = character;
        i++;
    }

    replaceSpacesWithTabs(inputString);

    cout << "Modified string: " << inputString << endl;

    return 0;
}

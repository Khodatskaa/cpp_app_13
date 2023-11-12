#include <iostream>
using namespace std;

uint64_t customStrlen(const char* str) 
{
    uint64_t len = 0;
    while (str[len] != '\0') 
    {
        len++;
    }
    return len;
}

int main()
{
    const uint64_t size = 1000;
    char str[size];
    cout << "Enter string: ";
    cin.getline(str, size);

    uint64_t letters = 0, numbers = 0, others = 0;

    for (uint64_t i = 0; i < customStrlen(str); i++) 
    {
        if (isalpha(str[i])) 
        {
            letters++;
        }
        else if (isdigit(str[i]))
        {
            numbers++;
        }
        else {
            if (str[i] != ' ' && str[i] != '\t') 
            {
                others++;
            }
        }
    }

    cout << "Number of letters: " << letters << endl;
    cout << "Number of numbers: " << numbers << endl;
    cout << "Number of other characters: " << others << endl;

    return 0;
}

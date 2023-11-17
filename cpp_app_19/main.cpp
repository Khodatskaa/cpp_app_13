#include <iostream>
using namespace std;

inline uint64_t customStrlen(const char* str)
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
	cout << "Enter a sentence: ";
	cin.getline(str, size);

	int words = 0;
	bool inWord = false;

	for (uint64_t i = 0; i < customStrlen(str); i++)
	{
		if (isalpha(str[i])) 
		{
			if (!inWord)
			{
				inWord = true;
				words++;
			}
		}
		else
		{
			inWord = false;
		}
	}

	cout << "Number of words: " << words << endl;

	return 0;
}

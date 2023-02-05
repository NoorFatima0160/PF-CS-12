
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    char letter;
    string word;
    cout << "enter a word : ";
    cin >> word;

    int count = 0;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            count++;
        }
    }
    cout << "number of vowels is :" << count;
}


#include <iostream>
#include <cmath>
using namespace std;
main()
{
    
    string sentence;
    cout << "enter a sentence: ";
    getline(cin, sentence);

    int count = 0;

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')
        {
        }
        else
            cout << sentence[i];
    }
}
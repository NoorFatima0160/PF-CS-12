
#include <iostream>
#include <cmath>
using namespace std;
main()
{

    string sentence;
    cout << "enter a sentence: ";
    getline(cin, sentence);

    int count = 0;
    cout << "Something " ;
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        cout << sentence[i];
    }
}
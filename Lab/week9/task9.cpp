
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    bool is = false;
    char alpha;
    string word;
    cout << "enter a word : ";
    cin >> word;
    int count = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        count++;
    }
    if (count % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
}
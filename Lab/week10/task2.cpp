#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int num;
    int count = 0;
    char alpha;

    cout << "enter number of words you want to enter  : ";
    cin >> num;
    string word[num];
    string temp;
    for (int i = 0; i < num; i++)
    {
        cout << "enter a word : ";
        cin >> word[i];
    }

    cout << "enter a alphabet you  want to check : ";
    cin >> alpha;

    for (int id = 0; id < num; id++)
    {
        temp = word[id];
        for (int i = 0; temp[i] != '\0'; i++)
        {
            if (temp[i] == alpha)
            {
                count++;
            }
        }
    }
    cout << "alphabet is present " << count << "";
}

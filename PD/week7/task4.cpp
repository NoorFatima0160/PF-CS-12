#include <iostream>
using namespace std;

main()
{

    int number;
    cout << " enter a number : ";
    cin >> number;
    for (int n = 1; n <= number; n++)
    {
        int s=n;
        if (s % 4 == 0)
        {
            int i;
            i = n;
            i = i * 10;
            cout << i;
        }
        else
        {
            cout << n;
        }
        cout << " , ";
    }
}
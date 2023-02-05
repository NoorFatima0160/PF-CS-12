#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int num, arrSize = 0;
    int number[arrSize];
    cout << "enter total number : ";
    cin >> arrSize;

    int count = 0;

    for (int i = 0; i < arrSize; i++)
    {
        cout << "enter number of array : ";
        cin >> number[i];
    }
    cout << "enter a number : ";
    cin >> num;
    for (int i = 0; i < arrSize; i++)
    {
        if (number[i] == num)
        {
            cout << "number is already entered ";
        }
    }
}
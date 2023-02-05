#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int result;
    int num, arrSize = 0;
    bool count = false;
    
    cout << "enter total number : ";
    cin >> arrSize;
    int number[arrSize];
    cout << "enter number of transformation : ";
    cin >> num;
    num = num * 2;
    for (int i = 0; i < arrSize; i++)
    {
        cout << "enter number of array : ";
        cin >> number[i];
    }

    for (int i = 0; i < arrSize; i++)
    {
        if (i % 2 == 0)
        {
            number[i] = number[i] + num;
        }

        if (i % 2 != 0)
        {
            number[i] = number[i] - num;
        }
    }
    for (int i = 0; i < arrSize; i++)
    {
        cout << number[i] << endl;
    }
}
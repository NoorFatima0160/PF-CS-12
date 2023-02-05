#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int result;
    int num, arrSize = 0;
    int number[arrSize];
    cout << "enter total number : ";
    cin >> arrSize;

    

    for (int i = 0; i < arrSize; i++)
    {
        cout << "enter number of array : ";
        cin >> number[i];
    }
    int count = number[0];
    for (int i = 1; i < arrSize; i++)
    {
        if (number[i] > number[i - 1])
        {
            count = number[i];
        }
    }
    cout<<" largest number is : "<<count;
}
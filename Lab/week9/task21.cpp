#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int result;
    int num, arrSize = 0;
    int count = 0;
    int number1[2];
    int number2[arrSize];
    cout << "enter total element of second array : ";
    cin >> arrSize;
    for (int i = 0; i < 2; i++)
    {
        cout << "enter element of first array : ";
        cin >> number1[i];
    }
    for (int i = 0; i < arrSize; i++)
    {
        cout << "enter number of second array : ";
        cin >> number2[i];
    }
    cout << number1[0] << ",";

    for (int i = 0; i < arrSize; i++)
    {
        cout << number2[i] << ",";
    }
    cout << number1[1] << ",";
}
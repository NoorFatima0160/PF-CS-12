#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int result;
    int num, arrSize = 0;
    int count = 0;
    float price, num1, num2, num3, num4, total;
    int number2[arrSize];
    cout << "enter total 4 element of array : ";
    cin >> arrSize;

    for (int i = 0; i < arrSize; i++)
    {
        cout << "enter number of  array : ";
        cin >> number2[i];
    }
    cout << "enter price of product : ";
    cin >> price;

    num1 = number2[0] * 0.25;
    num2 = number2[1] * 0.10;
    num3 = number2[2] * 0.05;
    num4 = number2[3] * 0.01;
    total = num1 + num2 + num3 + num4;
    if (total > price)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
}
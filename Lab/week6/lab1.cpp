#include <iostream>
using namespace std;
int large(int num1, int num2, int num3);
main()
{

    int number1;
    int number2;
    int number3;
    int result;
    cout << "enter first number :";
    cin >> number1;
    cout << "enter second number :";
    cin >> number2;
    cout << "enter third number :";
    cin >> number3;
    result = large(number1, number2, number3);
    cout << result << " is greater.";
}
int large(int num1, int num2, int num3)
{

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            return num1;
        }
    }
    if (num2 > num1)
    {
        if (num2 > num3)
        {
            return num2;
        }
    }
    if (num3 > num2)
    {
        if (num3 > num1)
        {
            return num3;
        }
    }
    return 0;
}

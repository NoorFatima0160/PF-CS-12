#include <iostream>
using namespace std;
int print(int number);
main()
{

    int number;
    cout << "enter a number : ";
    cin >> number;
    int result = print(number);
    cout << result;
}
int print(int number)
{
    int sum = 0;
    for (int count = 1; count <= number, count = count + 1;)
    {

        sum = sum + count;
    }
    return sum;
}
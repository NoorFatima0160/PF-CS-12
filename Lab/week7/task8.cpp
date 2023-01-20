#include <iostream>
using namespace std;
void myfun(int num);
main()
{
    int number = 1;

    myfun(number);
}

void myfun(int num)
{
    int sum=0;
    for (; num <= 100; num++)
    {

        sum = sum + num;
    }
    cout << sum;
}
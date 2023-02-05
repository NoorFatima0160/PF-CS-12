
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int sum = 0;
    float avg;
    int number[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        sum = sum + number[i];
    }
    avg = sum / 5;

    cout << "sum is " << sum<<endl;

    cout << "average is " << avg;
}
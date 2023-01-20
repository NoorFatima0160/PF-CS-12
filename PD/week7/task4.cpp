#include <iostream>
using namespace std;

main()
{

    int number, dots = 0, total = 0;
    cout << " enter a number : ";
    cin >> number;
    for (int n = 1; n <= number; n++)
    {
        total=total +n;
        cout<<total<<" , ";
    }
}
#include <iostream>
#include <cmath>
using namespace std;
main()
{

    int size, mul = 1, sum = 0;
   
    cout << "enter total number of days  : ";
    cin >> size;
    int days[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter number km run each days  : ";
        cin >> days[i];
    }

    for (int i = 0; i < size; i++)
    {

        mul = mul * days[i];
         if((i + 1) % 3 == 0)
        {
            sum = sum + mul;
            
            mul = 1;
        }
    }

    cout << "cube is : " << sum;
}
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int result;
    int num, arrSize = 0;
    bool count = false;
    int number[arrSize];
    cout << "enter total number : ";
    cin >> arrSize;

    for (int i = 0; i < arrSize; i++)
    {
        cout << "enter number of array : ";
        cin >> number[i];
    }

    for (int i = 1; i < arrSize; i++)
    {
        if (number[i] == 7)
        {
            count = true;
        }
    }
    if(count==true)
    cout<<"Boom";
    else
    cout<<" 7 is not present";
}

#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int arrSize=0;
    int number[arrSize];
    cout << "enter total number : ";
    cin >> arrSize;

    int count = 0;

    for (int i = 0; i < arrSize; i++)
    {
        cout << "enter number: ";
        cin >> number[i];
        
    }

    for (arrSize= arrSize-1; arrSize >= 0; arrSize--)
    {

        cout << number[arrSize]<<endl;;
    }
}
#include <iostream>
#include <cmath>
using namespace std;

main()
{
    bool count = false;

    int arrSize, length, cycle;
    cout << "enter a size of array : ";
    cin >> arrSize;
    int num[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        cout << "enter a number : ";
        cin >> num[arrSize];
    }
    cout << "enter a number of cycle : ";
    cin >> cycle;

     
        for (int j = 0; j < arrSize; j++)
        {
            if (cycle > arrSize)
            {
                count = true;
            }

            if (num[j] == num[cycle + j])
            {
                count = true;
                 else
            }
            
        }
    

    cout << count;
}
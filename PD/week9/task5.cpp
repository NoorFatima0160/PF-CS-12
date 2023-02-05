#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int result;
    bool count = false;
    int  arrSize = 4;
    string number[arrSize];

    for (int i = 0; i < arrSize; i++)
    {
        cout << "enter a string : ";
        cin >> number[i];
    }

    for (int i = 1; i < arrSize; i++)
    {
        if (number[i] == number[i - 1])
        {
            count = true;
        
        }
        else{
        cout<<"element are not same";
        break;
        }
    }
    if (count == true)
        cout << "element are same";
    
}
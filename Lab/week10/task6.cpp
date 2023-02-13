#include <iostream>
#include <cmath>
using namespace std;
main()
{

    int size;
    int progress = 0;
    cout << "enter total number in array : ";
    cin >> size;                                                                
    int days[size];
    int num1[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter number  " << i + 1 << " : ";
        cin >> days[i];
    }
    for (int i = 0; i < size; i++)
    {

        if (i == 0)
        {
            num1[0] = days[i];
        }
        if (i > 0)
        {    
            if (days[i] <= days[i - 1])
            {
                num1[i] = num1[i - 1];
                num1[i - 1] = days[i];
            }
            else
            {
                num1[i] = days[i];
            }
        }
        
    }
    for(int j=0;j< size;j++)
    cout<<num1[j]<<",";
}

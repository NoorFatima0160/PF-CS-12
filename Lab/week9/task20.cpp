#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int result;
    int num, arrSize = 0;
    int count=0;
    int number[arrSize];
    cout << "enter total number of capacitor: ";
    cin >> arrSize;

    

    for (int i = 0; i < arrSize; i++)
    {
        cout << "enter resistance of capacitor : ";
        cin >> number[i];
    }
  
    for (int i = 0; i < arrSize; i++)
    {
        
        
            count = count + number[i];
        
    }
    cout<<"Total resistance : "<<count<<" ohm";
}
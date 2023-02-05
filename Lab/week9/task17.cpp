#include <iostream>
#include <cmath>
using namespace std;
main()
{ int result;
    int num, arrSize = 0;
    int number[arrSize];
    cout << "enter total number : ";
    cin >> arrSize;

    int count = 0;

    for (int i = 0; i < arrSize; i++)
    {
        cout << "enter number of array : ";
        cin >> number[i];
    }
    cout << "enter a number : ";
    cin >> num;
    for (int i = 0; i < arrSize; i++)
    {
        result=number[i]*num;
        cout<<result<<endl;
    }
}
#include <iostream>
using namespace std;
main()
{
    int number;
    int num1 = 0;
    int num2 = 1;
    int sum;
    cout << "enter a number : ";
    cin >> number;
    
    cout<<num1<<endl  ;
    for (int count = 1; count <= number - 1; count = count + 1)
    {
        cout << num2 << endl;
        sum = num1 + num2;
       
        num1 = num2;
        num2 = sum;
    }
}

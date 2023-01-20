#include <iostream>
using namespace std;
main()
{
    int number;
   
    int result =0;
    cout << "enter a number : ";
    cin >> number;
    while (number != 0){
         
        number = number / 10;
        result =result+1;
    }
    cout <<result;
}
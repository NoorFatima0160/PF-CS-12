#include <iostream>
using namespace std;
main()
{
    int number1;
    int num2;
    int result =0;
    int counter =0;
    cout << "enter a number : ";
    cin >> number1;
    cout << "enter number whose frequency is to find : ";
    cin >> num2;
    while (number1 != 0){
         
        result = number1 % 10;
        if(result == num2){ 
            counter= counter + 1;
        }
        number1= number1 / 10;
       
    }
    cout <<counter;
}
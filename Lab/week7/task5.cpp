#include <iostream>
using namespace std;
int digitsum(int number);
main()
{
    int number1;
    int num;
    cout << "enter a number : ";
    cin >> number1;
    
    num= digitsum(number1);
    cout <<num;
}

int digitsum(int number){
    int num2=0;
    int result =0;
    
       while (number != 0){
         
        result = number % 10;
        num2 = num2 + result; 
         
        number= number/ 10;
       
    }
    return num2;
}
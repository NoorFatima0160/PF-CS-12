#include <iostream>
using namespace std;
main()
{
    int number;
    int num;
    int multiply;
    cout << "enter a number : ";
    cin >> number;
    for(int num=1; num<= 10;num++){
        multiply = number * num;
        cout<< number <<" * "<<num <<" = "<<multiply<<endl;
    }
}
#include <iostream>
using namespace std;
void myfun(int number);
main()
{
    int any;
    
    cout << "enter a number : ";
    cin >> any;
    
    myfun(any);
 
    
}

void myfun(int number){
   
  while(number < 0 ){

    
    cout << "enter a number : ";
    cin >> number;

  }
}
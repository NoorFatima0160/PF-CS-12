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
   int num =0;
  while(num  <= number  ){
   cout <<num<<endl;
   num++;
    
    

  }
}
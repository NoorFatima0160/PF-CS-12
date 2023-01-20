#include <iostream>
using namespace std;
void myfun(char character);
main()
{
    char any;
    
    cout << "enter a character : ";
    cin >> any;
    
    myfun(any);
 
    
}

void myfun(char character){
  while(character != 'y' ){

    cout <<"I am happy" <<endl;
    cout << "enter a character : ";
    cin >> character;

  }
}
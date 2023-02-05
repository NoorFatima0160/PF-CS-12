
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    bool is = false;
    string word ;
    cout<<"enter a word : ";
    cin>>word;

    
    int count = 0;
   
    for (int i = 0; word[i] != '\0'; i++)
    {
       
        count++;
    }
    for (; count >= 0; count--)
    {

       cout<< word[count];
        
    }
}
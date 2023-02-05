
#include <iostream>
#include <cmath>
using namespace std;
main()
{
   char letter;
    string word ;
    cout<<"enter a word : ";
    cin>>word;
    cout<<"enter a letter : ";
    cin>>letter;

    
    int count=0;
   
    for (int i = 0; word[i] != '\0'; i++)
    {
       count++;
    }
    
   
    if(word[count-1]==letter){
        cout<<"letter is same ";
    }
    else{
        cout<<" letter is not same";
    }

}

#include <iostream>
#include <cmath>
using namespace std;
main()
{
    bool is=false;
    char alpha;
    string word ;
    cout<<"enter a word : ";
    cin>> word;
     cout<<"enter a alphabet : ";
    cin>> alpha;
    for (int i = 0; word[i]!='\0'; i++)
    {
       if(word[i]==alpha){
        is=true;
       }
    }
   if(is==true){
    cout<<"alphabet is present";
   }
   else{
     cout<<"alphabet is not present";
   }
}
#include <iostream>
using namespace std;

main()
{
    float lines, p1=0, p2=0, p3=0, p4=0, p5=0;
    float percent1, percent2,percent3,percent4,percent5;
    int number;

    cout << "enter   number of lines : ";
    cin >> lines;
    for (int i = 1; i <= lines; i++){
    cout << "enter   numbers : ";
    cin >> number;
    
    
        if (number %2 == 0)
        {
            p1++;
        }
         if (number % 3 ==0 )
        {
            p2++;
        }
         if (number % 4 ==0)
        {
            p3++;
        }
        
    }

    percent1= p1 / lines * 100;
    percent2= p2 / lines * 100;
    percent3= p3 / lines * 100;
    
    cout<<percent1<<endl<<percent2<<endl<<percent3;
    
}
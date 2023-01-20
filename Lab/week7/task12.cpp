#include <iostream>
using namespace std;
// void myfun(int number,int number2);
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
    
    
        if (number < 200)
        {
            p1++;
        }
        else if (number >= 200 && number < 400)
        {
            p2++;
        }
        else if (number >= 400 && number < 600)
        {
            p3++;
        }
        else if (number >= 600 && number < 800)
        {
            p4++;
        }
        else if (number >= 800 )
        {
            p5++;
        }
        
    }

    percent1= p1 / lines * 100;
    percent2= p2 / lines * 100;
    percent3= p3 / lines * 100;
    percent4= p4 / lines * 100;
    percent5= p5 / lines * 100;
    cout<<percent1<<endl<<percent2<<endl<<percent3<<endl<<percent4<<endl<<percent5;
    //cout<<p1<<endl<<p2<<endl<<p3<<endl<<p4<<endl<<p5;
}
#include <iostream>
using namespace std;

main()
{
    float lines, minibus=0, truck=0, train=0, p4=0, p5=0,total=0,avg=0;
    float percent1, percent2,percent3,percent4,percent5,bybus,bytruck,bytrain;
    int tons;

    cout << "enter   number of lines : ";
    cin >> lines;
    for (int i = 1; i <= lines; i++){
    cout << "enter   numbers 0f tons : ";
    cin >> tons;
    
    
        if (tons<=3)
        {
           minibus = minibus + tons ;
        }
        else if (tons> 3 && tons <=11 )
        {
            truck= truck + tons;
        }
        else if (tons >11)
        {
            train = train+tons;
        }
        
    }
    total= minibus+truck+train;
    bybus= minibus/total *100;
    bytruck= truck/total *100;
    bytrain= train/total *100;
    
    avg=(minibus*200 + truck * 175 +train * 120) / total;
    cout<<"average is : "<<avg<<endl;
    cout<<bybus<<endl<<bytruck<<endl<<bytrain;
    
}
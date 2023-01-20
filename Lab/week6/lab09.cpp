#include <iostream>
#include <cmath>
using namespace std;

main()
{
    string year;
    int holiday;
    float holi;
    float weakend;
    float result;
    int home;
    float   percentage;
    
    cout<< "enter year :" ;
    cin>> year;
    cout<< "enter number of holidays:" ;
    cin>>holiday;
    cout<< "enter of number of weekend during which he travels:" ;
    cin>> home;
    if(year =="leap"){
        holi = holiday * 2 /3;
        weakend= 48- home;
        weakend= weakend * 3/4;
        result = holi + weakend + home;
        percentage= result * 15 /100;
        cout<<floor(percentage);

    }
    if(year =="normal"){
        holi = holiday * 2 /3;
        weakend= 48- home;
        weakend= weakend * 3/4;
        result = holi + weakend + home;
        
        cout<<floor(result);

    }
   
    

}
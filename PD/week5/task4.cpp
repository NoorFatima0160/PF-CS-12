#include <iostream>
using namespace std;
main(){
    int days,hours, wdays,total, Day,workers,remhours,extra;
    cout<<"enter days needed:";
     cin>>days;
    cout<<"how many number of days you have :";
    cin>>Day;
    remhours= Day * 8;

    cout<<"enter number of workers :";
     cin>>workers;
    days= days*8;
    wdays= days * 10 / 100;
    total = days - wdays;
    
    extra = workers*2;
    remhours = remhours + extra; 
    if(remhours> total){
    int ans=    remhours+total;
    cout<<" Well! you have "<<ans<<" hours";
    }
     if(remhours< total){
    
    cout<<"Not enough! you have required " <<total<<" hours";
    }





}
#include <iostream>
using namespace std;

main()
{
    int days,patient,treated=0,untreated=0;
    int doc=7,total;
    cout << "enter   number of days: ";
    cin >> days;
    for (int i = 1; i <= days; i++){
    cout << "enter   numbers : ";
    cin >> patient;
    if(patient <= doc){
        treated= treated + patient;
        
    }
   else if(patient > doc){
    treated = treated + doc;
    patient= patient - doc;
    untreated= untreated + patient;
    doc=doc +1;
   }

    
    
    }
    cout <<"number of treated patient : "<<treated<<endl;
    cout <<"number of untreated patient : "<<untreated;

}
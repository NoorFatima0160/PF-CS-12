#include <iostream>
#include <cmath>
using namespace std;
main()
{ 
    bool is=false;
    int num, count = 0;
    int sum,result,scount;
    cout << "enter nuber of colours : ";
    cin >> num;
    string string2[num];
    
    for (int i = 0; i < num; i++){
        cout << "enter  colours: ";
        cin>> string2[i];
        if(i==0){
            count++;
        }
       else if(i>0){
        if(string2[i] !=string2[i-1] ){
            count++;
        }
       }
    }
    scount=num*2;
    sum= count-1; 
    result=sum+scount;
    cout<<result;
}
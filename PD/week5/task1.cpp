#include <iostream>
using namespace std;
int value1=10;
int value2=20;
int sum (){
    int value1=30;
    int sum1 =value1+ value2;
   return sum1;
}
main(){
    
   int x=value1;
   value1=40;
   x= 20;
   value2 = sum();
   cout<<value1<<" "<<value2;


    
}
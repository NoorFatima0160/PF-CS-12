#include <iostream>
using namespace std;
main(){
int length,height,width;
float perimeter;
string unit;
cout<<"enter height :";
cin>>height;
cout<<"enter lenght :";
cin>> length;
cout<<"enter width :";
cin>>width;
cout<<"enter unit :";
cin>>unit;
perimeter = length * width * height /3;
cout<< "Perimeter is "<<perimeter<<endl;
if (unit=="centimeter"){
    perimeter= perimeter* 100;
    cout<<"by converting in centimeters :"<<perimeter<<"cm";

}
if (unit=="kilometer"){
    perimeter= perimeter/ 1000;
    cout<<"by converting in kilometer :"<<perimeter<<"km";

}
if (unit=="millimeter"){
    perimeter= perimeter * 1000;
    cout<<"by converting in millimeter :"<<perimeter<<"mm";

}

}
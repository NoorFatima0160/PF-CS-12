#include <iostream>
using namespace std;

main(){
int age ;
string gender;
cout<<"enter your age :";
cin>>age;
cout<<"enter your gender";
cin>>gender;
if(age >= 16){

    if(gender=="male"){
        cout<<"Mr.";
    }
     if(gender=="female"){
        cout<<"Ms.";
    }

}
else if(age<16){
    if(gender=="male"){
        cout<<"Master";
    }
     if(gender=="female"){
        cout<<"Miss";
    }

}


}
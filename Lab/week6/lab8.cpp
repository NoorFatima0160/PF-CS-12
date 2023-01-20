#include <iostream>
using namespace std;
void prices(int rows,int columns,string screens);
main()
{
    int row;
    int column;
    string screen;
    
    cout<< "enter number of rows :" ;
    cin>>row;
    cout<< "enter number of columns :" ;
    cin>>column;
    cout<< "enter type of screening :" ;
    cin>>screen;
    prices(row,column,screen);
    

}

void prices(int rows,int columns,string screens){
    float price;
    if( screens=="premiere"){
      price= rows * columns *12;
      cout<<price;
    }
    
    else if( screens=="normal"){
      price= rows * columns * 7.50;
      cout<<price;
    }

    else if( screens=="discount"){
      price= rows * columns * 5;
      cout<<price;
    }


}
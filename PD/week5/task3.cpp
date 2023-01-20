#include <iostream>
using namespace std;
int calculateTax(int item_price, char code);
main(){
    int item_price,total_price,tax;
    char code;
    cout<<"enter price of vehicle :";
    cin>> item_price;
     cout<<"enter code of vehicle :";
    cin>> code; 
    tax =calculateTax(item_price,code);
    total_price = item_price+tax;
    cout<< "Total price of vehicl is :"<<total_price;
    

}


int calculateTax(int item_price, char code){
    if(code=='M'){
        int tax_amount = item_price * 6/100;
        return tax_amount;
    }
     if(code=='E'){
        int tax_amount = item_price * 8/100;
        return tax_amount;
    }
     if(code=='S'){
        int tax_amount = item_price * 10/100;
        return tax_amount;
    }
     if(code=='V'){
        int tax_amount = item_price * 12/100;
        return tax_amount;
    }
     if(code=='T'){
        int tax_amount = item_price * 15/100;
        return tax_amount;
    }
    return 0;
}
#include <iostream>
using namespace std;
float discount(string day, string month, float amount);

main()
{
    float amount;
    float result;
    string day;
    string month;
    cout << "enter price :";
    cin >> amount;
    cout << "enter day :";
    cin >> day;
    cout << "enter month :";
    cin >> month;
    result = discount(day, month, amount);
    cout << "price after discount :"<<result;
}

float discount(string day, string month, float amount)
{
    float payable = amount;
    if (day == "sunday" && (month=="october"||month =="March"||"August"))
    {
        float dis = amount * 10 / 100;
        payable = amount - dis; 
        return payable;}
        else if(day=="monday" &&(month=="november" || month =="december")){
               float dis = amount * 15 / 100;
               payable = amount - dis; 
               return payable;

        }
       
        else
        return payable;
}


#include <iostream>
#include <cmath>
using namespace std;
void bill(string day,string fruit,float quantity);
main()
{
    string day1;

    string fruit1;
    float quantity1;
    cout << "enter day:";
    cin >> day1;
    cout << "enter name of fruit :";
    cin >> fruit1;
    cout << "enter quantity :";
    cin >> quantity1;

    bill(day1,fruit1,quantity1);

}
    void bill(string day,string fruit,float quantity){
        float price;
    if (day == "monday" || day == "tuesday" || day == "tuesday" ||
        day == "thursday" || day == "friday")
    {
        if (fruit == "banana")
        {
            price = 2.50 * quantity;
            cout << "your bill is : " << price;
        }
        else if (fruit == "apple")
        {
            price = 1.20 * quantity;
            cout << "your bill is : " << price;
        }
        else if (fruit == "orange")
        {
            price = 0.85 * quantity;
            cout << "your bill is : " << price;
        }
        else if (fruit == "grapefriut")
        {
            price = 1.45 * quantity;
            cout << "your bill is : " << price;
        }
        else if (fruit == " kiwi")
        {
            price = 2.70 * quantity;
            cout << "your bill is : " << price;
        }
        else if (fruit == "pineapple")
        {
            price = 5.50 * quantity;
            cout << "your bill is : " << price;
        }
        else if (fruit == "grapes")
        {
            price = 3.85 * quantity;
            cout << "your bill is : " << price;
        }
    }

    if (day == "sunday" || day == "saturday")
    {
        if (fruit == "banana")
        {
            price = 2.70 * quantity;
            cout << "your bill is : " << price;
        }
        else if (fruit == "orange")
        {
            price = 0.90 * quantity;
            cout << "your bill is : " << price;
        }
        else if (fruit == "grapefriut")
        {
            price = 1.60 * quantity;
            cout << "your bill is : " << price;
        }
        else if (fruit == " kiwi")
        {
            price = 3.00 * quantity;
            cout << "your bill is : " << price;
        }
        else if (fruit == "pineapple")
        {
            price = 5.60 * quantity;
            cout << "your bill is : " << price;
        }
        else if (fruit == "grapes")
        {
            price = 4.20 * quantity;
            cout << "your bill is : " << price;
        }

        else if (fruit == "apple")
        {
            price = 1.25 * quantity;
            cout << "your bill is : " << price;
        }
    }
}
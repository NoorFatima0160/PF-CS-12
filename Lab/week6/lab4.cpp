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
    if (day == "sunday")
    {
        float dis = amount * 5 / 100;
        payable = amount - dis;

        if (month == "october")
        {
            dis = amount * 10 / 100;
            payable = amount - dis;
        }
        return payable;
    }
    else
    return payable;
}
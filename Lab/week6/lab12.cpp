#include <iostream>
#include <cmath>
using namespace std;

main()
{
    string time;

    float distance;
    double price;

    cout << "enter time day or night :";
    cin >> time;

    cout << "enter  distance in km:";
    cin >> distance;

    if (distance < 20 && time == "day")
    {
        price = 0.79 * distance + 0.70;
        cout << "your price will be" << price;
    }

    else if (distance < 20 && time == "night")
    {
        price =  0.90 * distance + 0.70;
        cout << "your price will be" << price;
    }

    else if (distance < 100 && (time == "day" || time == "night"))
    {
        price = 0.09 * distance;
        cout << "your price will be" << price;
    }

    else if (distance > 100 && (time == "day" || time == "night"))
    {
        price = 0.06 * distance;
        cout << "your price will be" << price;
    }
}
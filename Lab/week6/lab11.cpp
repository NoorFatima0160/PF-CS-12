#include <iostream>
#include <cmath>
using namespace std;

main()
{
    string product;
    int number;
    string city;
    double price;

    cout << "enter type of product :";
    cin >> product;
    cout << "enter number of product  :";
    cin >> number;
    cout << "enter city name  :";
    cin >> city;

    if (product == "coffee" && city == "Sofia")
    {
        price = 0.50 * number;
        cout << "your total cost is :" << price;
    }

    if (product == "coffee" && city == "Plodiv")
    {
        price = 0.40 * number;
        cout << "your total cost is :" << price;
    }

    if (product == "coffee" && city == "Varna")
    {
        price = 0.45 * number;
        cout << "your total cost is :" << price;
    }

    if (product == "water" && city == "Sofia")
    {
        price = 0.80 * number;
        cout << "your total cost is :" << price;
    }

    if (product == "water" && city == "Plodiv")
    {
        price = 0.70 * number;
        cout << "your total cost is :" << price;
    }

    if (product == "water" && city == "Varna")
    {
        price = 0.70 * number;
        cout << "your total cost is :" << price;
    }

    if (product == "beer" && city == "Sofia")
    {
        price = 1.20 * number;
        cout << "your total cost is :" << price;
    }

    if (product == "beer" && city == "Plodiv")
    {
        price = 1.15 * number;
        cout << "your total cost is :" << price;
    }

    if (product == "beer" && city == "Varna")
    {
        price = 1.10 * number;
        cout << "your total cost is :" << price;
    }

    if (product == "sweats" && city == "Sofia")
    {
        price = 1.45 * number;
        cout << "your total cost is :" << price;
    }

    if (product == "sweats" && city == "Plodiv")
    {
        price = 1.30 * number;
        cout << "your total cost is :" << price;
    }

    if (product == "sweats" && city == "Varna")
    {
        price = 1.35 * number;
        cout << "your total cost is :" << price;
    }

    if (product == "peanuts" && city == "Sofia")
    {
        price = 1.60 * number;
        cout << "your total cost is :" << price;
    }

    if (product == "peanuts" && city == "Plodiv")
    {
        price = 1.50 * number;
        cout << "your total cost is :" << price;
    }

    if (product == "peanuts" && city == "Varna")
    {
        price = 1.55 * number;
        cout << "your total cost is :" << price;
    }
}

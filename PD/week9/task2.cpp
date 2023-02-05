
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int arrSize = 5;
    float total, price;
    string movieName;
    int amount, index = 0;
    string movies[arrSize] = {"gladiators", "starwars", "terminator", "takinglives", "tombrider"};

    cout << "enter movie name : ";
    cin >> movieName;

    int count = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (movies[i] == movieName)
        {
            index = i;
        }
    }

    if (index % 2 == 0)
    {
        price = 500 / 100 * 10;
        total = 500 - price;
        cout << "Total price : " << total;
    }
    else
    {
        price = 500 / 100 * 5;
        total = 500 - price;
        cout << "Total price : " << total;
    }
}
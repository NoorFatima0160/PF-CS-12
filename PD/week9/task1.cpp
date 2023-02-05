
#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int arrSize = 4;
    float total;
    string fruitName;
    int amount, index=0;
    string fruit[arrSize] = {"peach", "apple", "guava", "watermelon"};
    int price[] = {60, 70, 40, 30};
    cout << "enter fruit name : ";
    cin >> fruitName;
    cout << " enter amount in kgs : ";
    cin >> amount;

    int count = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (fruit[i] == fruitName)
        {
            index = i;
        }
    }

    total = price[index] * amount;
    cout << total;
}
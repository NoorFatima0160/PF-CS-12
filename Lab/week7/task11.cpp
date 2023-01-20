#include <iostream>
#include <cmath>
using namespace std;
int digitsum(int number);
main()
{
    int age;
    float even, toys, remaining;
    float odd, aged, machine, ptoy, all, mon, result;

    int money = 0;
    float price = 1, total = 0;

    cout << "enter your age : ";
    cin >> age;
    cout << "enter price of washing machine : ";
    cin >> machine;
    cout << "enter price of toys : ";
    cin >> toys;
    age = age / 2;
    even = floor(age);
    odd = ceil(age);

    ptoy = odd * toys;

    while (price <= even)
    {
        money = money + 10;
        total = total + money;
        price++;
    }
    remaining = total - even;

    all = remaining + ptoy;
    if (all >= machine)
    {
        result = all - machine;
        cout << "you can buy a washing machine "<<endl;
        cout << "you have : " << result;
    }
    else if (all < machine){
        result = machine - all;
    cout << " you cannot buy a washing machine"<<endl;
    cout << "you need : " << result;}
}

#include <iostream>
#include <cmath>
using namespace std;
// void bill(string day,string fruit,float quantity);
main()
{
    int h, x, y;

    int base, roof;
    cout << "enter height : ";
    cin >> h;
    cout << "enter value of x  : ";
    cin >> x;
    cout << "enter value of y : ";
    cin >> y;
    base = h * 3;
    roof = h * 4;
    if ((x == 0 || x == base) && (y >= 0 && y <= 0))
    {
        cout << "border";
    }
    else if ((y == 0) && (x >= 0 && x <= base))
    {
        cout << "border";
    }
    if ((y == 0) && ((x >= 0 && x <= h) || (x >= h * 2 && x <= base)))
    {
        cout << "border";
    }
    else if ((x == h || x == h * 2) && (y >= h || y <= h * 2))
    {
        cout << "border";
    }
    else if ((y == roof) && (x >= h && x <= h * 2))
    {
        cout << "border";
    }

    else if ((x > 0 && x < base) && (y > 0 && y < h))
    {
        cout << " inside";
    }

    else if ((x > 0 && x < base) && (y > 0 && y < h))
    {
        cout << "inside";
    }
    else if ((x > 0 && x < h * 2) && (y > 0 && y < roof))
    {
        cout << " inside";
    }
    else
    cout<<"outside";
}
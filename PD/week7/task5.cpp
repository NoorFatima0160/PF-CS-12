#include <iostream>
using namespace std;

main()
{

    int rows,dots =0,total=0;
    cout << " enter number of rows : ";
    cin >> rows;
    for (int n = 1; n <= rows; n++)
    {
        dots++;
        total= total + dots;

    }
    cout<<"number of dots is : "<<total;
}
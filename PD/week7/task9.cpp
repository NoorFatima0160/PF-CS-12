#include <iostream>
using namespace std;
void upper(int rows);
void lower(int rows);
main()
{

    int row;
    cout << " enter number of rows : ";
    cin >> row;
    upper(row);lower(row);
    
}
void upper(int rows)
{
    int i, z = 0;
    for (int n = rows; n >= 1; n--)
    {
        z++;
        for (i = n; i >= 1; i--)
        {
            cout << " ";
        }
        for (int s = 1; s <= z; s++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void lower(int rows)
{
    int num;
    for (int n = 1; n <= rows; n++)
    {
        num++;
        for (int i = 1; i <= n; i++)
        {
            cout << "*";
        }
        for (int s = num; s <= rows; s++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
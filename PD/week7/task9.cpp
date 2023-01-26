#include <iostream>
using namespace std;

void lower(int rows);
main()
{

    int row;
    cout << " enter number of rows : ";
    cin >> row;
    
    lower(row);
}


void lower(int rows)
{
    int r = rows;
    int num = 0;
    for (int n = 1; n <= rows; n++)
    {
        num++;
        for (int i = 1; i <= n; i++)
        {
            cout << "*";
        }
        r = r - 1;
        for (int s = r; s >= 1; s--)
        {
            cout << " ";
        }
        for (int r2 = r; r2 >= 1; r2--)
        {
            cout << " ";
        }
        for (int z = 1; z <= num; z++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
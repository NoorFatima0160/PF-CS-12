#include <iostream>
using namespace std;
// svoid upper(int rows);
void lower(int rows);
main()
{

    int row;
    cout << " enter number of rows : ";
    cin >> row;
    // upper(row);
    lower(row);
}
/*void upper(int rows)
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
}*/

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
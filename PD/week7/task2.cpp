#include <iostream>
using namespace std;

main()
{

    int rows;
    cout << " enter number of rows : ";
    cin >> rows;
    for (int n = rows; n >= 1; n--){
        for (int i = n; i >= 1; i--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
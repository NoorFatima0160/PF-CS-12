#include <iostream>
#include <cmath>
using namespace std;
main()
{

    int size;
    int progress = 0;
    cout << "enter total number of days  : ";
    cin >> size;
    int days[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter number km run each days  : ";
        cin >> days[i];
        if (i > 0)

        {

            if (days[i] > days[i - 1])
            {
                progress++;
            }
        }
    }

    cout << "number of progress days are : " << progress;
}
#include <iostream>
#include <cmath>
using namespace std;
main()
{

    int size;
    int progress = 0;
    cout << "enter total number in array : ";
    cin >> size;
    int days[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter number  " << i + 1 << " : ";
        cin >> days[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (i > 0 && i < (size - 1))

        {

            if (days[i] > days[i - 1] && days[i] > days[i + 1])
            {
                cout << " Peak value are : " << days[i] << endl;
                progress++;
            }
        }
    }
    if (progress == 0)
    {
        cout << "no peak value exist";
    }
}

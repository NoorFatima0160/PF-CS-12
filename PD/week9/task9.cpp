#include <iostream>
#include <cmath>
using namespace std;
main()
{

    int pin[4], count = 0;

    string moves[10] = {
        "Shimmy",
        "Shake",
        "Pirouette",
        "Slide",
        "BoxStep",
        "Headspin",
        "Dosado",
        "Pop",
        "Lock",
        "Arabesque",
    };
    int idx = 0;
    for (int i = 0; i < 4; i++)
    {
        cout << "enter your pin : ";
        cin >> pin[i];
    }

    for (int i = 0; i < 4; i++)
    {

        if (pin[i] == 0)
        {
            idx = 0 + i;
            cout << moves[idx];
        }
        else if (pin[i] == 1)
        {
            idx = 1 + i;
            cout << moves[idx];
        }
        else if (pin[i] == 2)
        {
            idx = 2 + i;
            cout << moves[idx];
        }
        else if (pin[i] == 3)
        {
            idx = 3 + i;
            cout << moves[idx];
        }
        else if (pin[i] == 4)
        {
            idx = 4 + i;
            cout << moves[idx];
        }
        else if (pin[i] == 5)
        {
            idx = 5 + i;
            cout << moves[idx];
        }
        else if (pin[i] == 6)
        {
            idx = 6 + i;
            if (idx > 9)
            {
                idx = idx - 10;
                cout << moves[idx];
            }
            else
            {
                idx = 6 + i;
                cout << moves[idx];
            }
        }
        else if (pin[i] == 7)
        {
            idx = 7 + i;
            if (idx > 9)
            {
                idx = idx - 10;
                cout << moves[idx];
            }
            else
                {
                idx = 7 + i;
                cout << moves[idx];
            }
        }
        else if (pin[i] == 8)
        {
            idx = 8 + i;
            if (idx > 9)
            {
                idx = idx - 10;
                cout << moves[idx];
            }
            else
               {
                idx = 8 + i;
                cout << moves[idx];
            }
        }
        else if (pin[i] == 9)
        {
            idx = 9 + i;
            if (idx > 9)
            {
                idx = idx - 10;
                cout << moves[idx];
            }
            else
                {
                idx = 9 + i;
                cout << moves[idx];
            }
        }
        cout << ",";
    }
}
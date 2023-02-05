#include <iostream>
#include <cmath>
using namespace std;
main()
{ 
    bool is=false;
    int count = 0;
    string string1, string2;
    cout << "enter first string : ";
    cin >> string1;
    cout << "enter second string : ";
    cin >> string2;
    for (int i = 0; string1[i] != '\0'; i++)

    {
        for (int id = 0; string2[id] != '\0'; id++)
        {
            if (string1[i] == string2[id])
            {
                if (id > 0)
                {
                    for (int idx = id; idx >= 0; idx--)
                    {
                        if (string2[id] != string2[idx])
                            is = true;
                        else
                            is = false;
                    }
                    if (is == true)
                    {
                        count++;
                    }
                }
                else
                    count++;
            }
        }
    }
    cout << "common elements = " << count / 2 +1;
}
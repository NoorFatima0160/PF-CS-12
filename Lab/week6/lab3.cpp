
#include <iostream>
using namespace std;

main()
{

    int number;

    cout << "enter your marks :";
    cin >> number;
    if (number > 85)
    {
        cout << "your grade is A";
    }

    else if (number > 80 && number <= 85)
    {
        cout << "your grade is B";
    }

    else if (number > 70 && number <= 80)
    {
        cout << "your grade is C";
    }

    else if (number > 60 && number <= 70)
    {
        cout << "your grade is D";
    }

    else if (number >= 50 && number <= 60)
    {
        cout << "your grade is E";}

    else if (number < 50)
        {
            cout << "your grade is F";
        }
    else
    cout<<"invalid number";
    
}
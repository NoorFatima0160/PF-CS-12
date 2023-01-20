#include <iostream>
#include <cmath>
using namespace std;
void time(float htime, float mtime, float harrive, float marrive);

main()
{
    float time1, time2;
    float arive1, arive2;
    float hour, mins;

    cout << "enter time of arrival in hours:";
    cin >> time1;
    cout << "enter time of arrival in minutes:";
    cin >> time2;
    cout << "enter time at which student arrive in hours:";
    cin >> arive1;
    cout << "enter time at which student arrive in minutes:";
    cin >> arive2;

    time(time1, time2, arive1, arive2);
}

void time(float htime, float mtime, float harive, float marive)
{ 
    float hour,mins;

    if((htime==harive) && (mtime==marive))
    {
        cout << "student is on time";
    }

    else if ((htime <= harive) && (mtime <= marive))
    {
        hour = harive - htime;
        mins = marive - mtime;
        cout << "student is late " << hour<< ":"<< mins;
    }

    else if ((htime >= harive) && (mtime >= marive))
    {
        hour = htime - harive;
        mins = mtime - marive;
        cout << "student come before  " << hour<<":" << mins << "before";
    }
}
#include <iostream>
#include <cmath>
using namespace std;

// void myfun(int number,int number2);
main()
{
    int age = 18;
    float money,even, odd, meven, modd,total,remaining=0;
    int year;
    cout << "enter money : ";
    cin >> money;
    cout << "enter  year: ";
    cin >> year;
    year = year - 1800;
    cout<<year<<endl;
    age = age +year +1;
    cout<<age<<endl;
    year = year / 2;
    even = floor(year);
    odd = ceil(year);
    even = even + 1;
     cout<<even<<endl;
      cout<<odd<<endl;
   
    meven = even * 12000;
     cout<<meven<<endl;
    modd = 12000 + 50 * age;
    modd = modd * odd;
     cout<<modd<<endl;
    
    total = meven + modd;
    cout<< total<<endl;
    if (total <= money)
    {
        remaining = money - total;
        cout << " you can live with out working"<<endl;
        cout<<" your remaining price is : "<<remaining;
    }
    else if (total > money)
    {
        remaining= total- money ;
        cout << "you need more money"<<endl;
        cout<<" you need money : "<<remaining;
    }
    }

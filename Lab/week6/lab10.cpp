#include <iostream>
#include <cmath>
using namespace std;

main()
{
    string ticket;
    int members;
    float bugdet, price;
    float bugper;
    cout<< "enter type of ticket :";
    cin>>ticket;
     cout<< "enter number of members  :";
    cin>>members;
     cout<< "enter  budget:";
    cin>> bugdet;

    
    if (members >= 1 && members <= 4)
    {
        bugper = bugdet * 75 / 100;
        bugdet = bugdet - bugper;
        if (ticket == "vip")
        {
            price = members * 499.9;
            if (price < bugdet)
            {
                bugdet = bugdet - price;

                cout << "you have left "<< bugdet<< " rials";
            }
            else{
                price= price -bugdet;
                cout<<"you need "<<price<<" rials";

            }
        }
         if (ticket == "normal")
        {
            price = members * 249.9;
            if (price < bugdet)
            {
                bugdet = bugdet - price;

                cout << "you have left "<< bugdet<< " rials";
            }
            else{
                price= price -bugdet;
                cout<<"you need "<<price<<" rials";

            }
        }
    }



    if (members >= 5 && members <= 9)
    {
        bugper = bugdet * 60 / 100;
        bugdet = bugdet - bugper;
        if (ticket == "vip")
        {
            price = members * 499.9;
            if (price < bugdet)
            {
                bugdet = bugdet - price;

                cout << "you have left "<< bugdet<< " rials";
            }
            else{
                price= price -bugdet;
                cout<<"you need "<<price<<" rials";

            }
        }
         if (ticket == "normal")
        {
            price = members * 249.9;
            if (price < bugdet)
            {
                bugdet = bugdet - price;

                cout << "you have left "<< bugdet<< " rials";
            }
            else{
                price= price -bugdet;
                cout<<"you need "<<price<<" rials";

            }
        }
    }


    if (members >= 10 && members <= 24)
    {
        bugper = bugdet * 50 / 100;
        bugdet = bugdet - bugper;
        if (ticket == "vip")
        {
            price = members * 499.9;
            if (price < bugdet)
            {
                bugdet = bugdet - price;

                cout << "you have left "<< bugdet<< " rials";
            }
            else{
                price= price -bugdet;
                cout<<"you need "<<price<<" rials";

            }
        }
         if (ticket == "normal")
        {
            price = members * 249.9;
            if (price < bugdet)
            {
                bugdet = bugdet - price;

                cout << "you have left "<< bugdet<< " rials";
            }
            else{
                price= price -bugdet;
                cout<<"you need "<<price<<" rials";

            }
        }
    }



    if (members >= 25 && members <= 49)
    {
        bugper = bugdet * 40 / 100;
        bugdet = bugdet - bugper;
        if (ticket == "vip")
        {
            price = members * 499.9;
            if (price < bugdet)
            {
                bugdet = bugdet - price;

                cout << "you have left "<< bugdet<< " rials";
            }
            else{
                price= price -bugdet;
                cout<<"you need "<<price<<" rials";

            }
        }
         if (ticket == "normal")
        {
            price = members * 249.9;
            if (price < bugdet)
            {
                bugdet = bugdet - price;

                cout << "you have left "<< bugdet<< " rials";
            }
            else{
                price= price -bugdet;
                cout<<"you need "<<price<<" rials";

            }
        }
    }


    if (members >50)
    {
        bugper = bugdet * 25 / 100;
        bugdet = bugdet - bugper;
        if (ticket == "vip")
        {
            price = members * 499.9;
            if (price < bugdet)
            {
                bugdet = bugdet - price;

                cout << "you have left "<< bugdet<< " rials";
            }
            else{
                price= price -bugdet;
                cout<<"you need "<<price<<" rials";

            }
        }
         if (ticket == "normal")
        {
            price = members * 249.9;
            if (price < bugdet)
            {
                bugdet = bugdet - price;

                cout << "you have left "<< bugdet<< " rials";
            }
            else{
                price= price -bugdet;
                cout<<"you need "<<price<<" rials";

            }
        }
    }
}
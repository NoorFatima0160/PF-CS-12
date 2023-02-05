#include <iostream>
#include <cmath>
using namespace std;
main()
{

   string arrSize;
   cout << "enter a string : ";
   getline(cin, arrSize);
   int lenght = arrSize.length();
   if (lenght % 2 == 0)
   {
      cout << true;
   }
   else
   {
      cout << false;
   }
}

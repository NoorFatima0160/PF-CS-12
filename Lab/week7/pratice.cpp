#include <iostream>
#include <cmath>
using namespace std;
//void bill(string day,string fruit,float quantity);
void print(int number);
main()
{
    
    int number;
    cout<<"enter a number : ";
    cin >>number;
    print(number);
   

}
void print(int number){
    int sum=0;
    for(int count = 1; count <= number, count= count+1;)
    {
        
         sum = sum + count;
        cout<<count<<endl;
    }
}
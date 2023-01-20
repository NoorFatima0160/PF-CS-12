#include <iostream>
using namespace std;

main(){
    
   int rows;
   cout<<" enter number of rows : ";
   cin>>rows;
   for(int n=1; n<= rows;n++){
    for(int i= 1; i<=n; i++){
        cout<<"* ";
    }
    cout<<endl;
   }



    
}
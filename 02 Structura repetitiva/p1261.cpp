/*

*/

#include <iostream>
using namespace std;

int main(){
    int n,pare=0;
    cin>>n;
    while (n!=0){

        if(n%2==0)
            pare++;
            cin>>n;
   }
   if (pare>0)
        cout<<pare;
    else
        cout<<"NU EXISTA";
return 0;
}

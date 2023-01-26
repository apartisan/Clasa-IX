/*

*/

#include <iostream>
using namespace std;

int main(){
    int n,inv=0,aux;
    cin >>n;
    aux = n;
    while (aux){
        inv = inv*10 +aux%10;
        aux /=10;
    }
    if (n==inv)
         cout <<"Este palindrom";
    else
        cout <<"Nu este palindrom";
return 0;
}

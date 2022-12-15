/*

*/

#include <iostream>
using namespace std;

int main(){

    long int n;
    cin>>n;
    while (n%10==0)
            n=n/10;

    cout<<n;
return 0;
}

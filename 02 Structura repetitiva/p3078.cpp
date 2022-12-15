/*

*/

#include <iostream>
using namespace std;

int main(){
    long long n,k, p=1;
    cin >>n>>k;
    while (n!=0){

        if (n%10!=k)
            p = p*(n%10);
        n/=10;
    }
    if (p==1)
        cout<<0;
    else
        cout<<p;
return 0;
}

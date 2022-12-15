/*

*/

#include <iostream>
using namespace std;

int main(){

    long int n;
    int minim=9,uc;
    int maxim = 0;
    cin>>n;
    while (n!=0){
            uc= n%10;
        if(uc<minim)
            minim = uc;
        if (uc> maxim)
            maxim = uc;
        n /=10;

    }
    cout << "minim " << minim<<endl;
    cout << "maxim " << maxim;
return 0;
}

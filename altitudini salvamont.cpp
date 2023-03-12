/*

*/

#include <iostream>
using namespace std;

int main(){
int h1, h2, d, L=0, nrC=0,n=10;
cin >>h1 >>h2;
d = h2-h1;
if(d>5){
    L=d;
    nrC++;
}
for(int i=3;i<=n;i++){
    h1=h2;
    cin>>h2;
    d = h2-h1;
if(d>5){
    nrC++;
    if (d>L)
        L=d;
}
}
cout <<"Nr de corzi: "<<nrC;
cout <<endl << "Lungimea maxima: " <<L;
return 0;
}

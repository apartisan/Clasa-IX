/*
cu vectori (tablou unidimensional)
*/

#include <iostream>
using namespace std;

int main(){
    int L=0, nrC=0, n, h[50],d;
    cin >>n;
    for (int i=0; i<n;i++)
        cin >>h[i];
    for(int i=1;i<n;i++){
        d = h[i]-h[i-1];
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

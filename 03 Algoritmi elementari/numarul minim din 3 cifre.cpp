/*

*/

#include <iostream>
using namespace std;

int main(){
    int n,a,b,c,aux, nr_min;
    cout << "Dati un numar: ";
    cin >> n;
    a = n/100;
    b = n/10%10;
    c = n%10;
    if (a>b)
        aux = a; a = b; b = aux;
    if (b>c)
        aux = b; b = c; c = aux;
    if (a>c)
        aux = a; a = c; c = aux;i jn,
    nr_min = a*100 + b*10 +c;
    cout << "Numarul minim este " << nr_min;
return 0;
}

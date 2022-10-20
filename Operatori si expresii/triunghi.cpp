#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c;
    float p, arie;
    cout<<"Dati 3 numere: ";
    cin >> a >> b >> c;
    if ((a+b>c) && (a+c>b) && (b+c>a)){
        cout<<"Numerele formeaza un triunghi ";
        p = (a+b+c)/2;
        arie = sqrt(p*(p-a)*(p-b)*(p-c));
        cout <<"\nAria triunghiului este " << arie;
        if (a==b && b==c)
            cout<<"\nTriunghiul este echilateral. "<<endl;
        else if (a==b || a==c || b==c)
                cout<<"\nTriunghiul este isoscel. "<<endl;
             else if (b*b ==a*a+c*c ||
                      c*c==a*a+b*b ||
                      a*a==b*b+c*c)
                        cout<<"\nTriunghiul este dreptunghic. "<<endl;
                else
                    cout<<"\nTriunghiul este oarecare. "<<endl;
    }

    else
        cout <<"Numere nu formeaza un triunghi";
return 0;
}

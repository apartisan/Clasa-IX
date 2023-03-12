#include <iostream>
using namespace std;
int main(){
    int n, i, contor,nr;
    bool estePrim;
    cin >> nr;
    n=2;
    contor = 0;
    do{
        estePrim = true;
        for(i=2;i*i<=n; i++)
            if(n%i==0)
                estePrim = false;
        if(estePrim){
           cout<< n <<" ";
           contor++;
        }
        n++;
    }while(contor<nr);

    return 0;
}

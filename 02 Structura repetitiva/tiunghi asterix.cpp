/*

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int lin=1; lin<=n; lin++){
        for (int col=1; col<=lin; col++)
            cout<<"* ";
        cout<<endl;
    }
    for (int lin=n-1; lin>=1; lin--){
        for (int col=1; col<=lin; col++)
            cout<<"* ";
        cout<<endl;
    }
    for (int lin=1; lin<=n; lin++){
        //spatii inainte de *
        for (int col=1; col<=n-lin; col++)
            cout<<"  ";
        // elemente *
        for (int col=1; col<=lin; col++)
            cout<<"* ";
        // trecere la alta linie
        cout<<endl;
    }
return 0;
}

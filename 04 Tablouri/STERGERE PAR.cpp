/*
Stergerea elementelor pare dintr-un vector
*/

#include <iostream>
using namespace std;

int main(){
    int n, a[100];
    cout<<"Cate elemente sunt: ";
    cin>>n;
    cout <<"dati valorile vectorului: ";
    for (int i=0; i<n; i++)
        cin >>a[i];
    //stergere elemente pare
    for (int i=n-1; i>=0 ;i--){
        if (a[i]%2==0){
            for (int j=i; j<n-1;j++)
                a[j] = a[j+1];
            n--;
        }
    }
    //afisare
    for (int i=0; i<n; i++)
        cout<< a[i];


return 0;
}

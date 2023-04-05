#include <iostream>
using namespace std;
int main(){
    int n, a[100];
    cin>>n;
    //citire
    for(int i=0; i<n;i++)
        cin>>a[i];
    //selection sort
    for (int i =0; i<n-1; i++)
        for(int j=i+1; j<n;j++)
            if (a[i]>a[j]){
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
    //afisare
    for(int i=0; i<n;i++)
        cout<<a[i]<<" ";
return 0;
}

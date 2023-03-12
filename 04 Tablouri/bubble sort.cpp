/*

*/

#include <iostream>
using namespace std;

int main(){
    int n, a[100];
    bool sortat;
    cin>>n;
    for(int i=0; i<n;i++)
        cin>>a[i];

    do{
    sortat = true;
    for (int i=0; i<n-1 ;i++)
        if (a[i]>a[i+1]){
            int aux = a[i];
            a[i] = a[i+1];
            a[i+1] = aux;
            sortat = false;
        }
    }while(!sortat);


    for(int i=0; i<n;i++)
        cout<<a[i]<<" ";


return 0;
}

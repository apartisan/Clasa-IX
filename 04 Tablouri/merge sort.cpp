/*

*/

#include <iostream>
using namespace std;

int main(){
    int n,m, a[100],b[100], c[200];
    int i,j,k;
    cin>>n>>m;
    for(i=0; i<n;i++)
        cin>>a[i];
    for(j=0; j<m;j++)
        cin>>b[j];

    //merge sort
    i=j=k=0;
    while (i<n && j<m){
        if (a[i]<b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while (i<n)
        c[k++] = a[i++];
    while (j<m)
        c[k++] = b[j++];

    //afisare
    for(i=0; i<n+m;i++)
        cout<<c[i]<<" ";


return 0;
}

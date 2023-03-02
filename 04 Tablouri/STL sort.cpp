/*

*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, a[100];
    bool sortat;
    cin>>n;
    //citire
    for(int i=0; i<n;i++)
        cin>>a[i];

   sort(a+1,a+3+1);
    //afisare
    for(int i=0; i<n;i++)
        cout<<a[i]<<" ";


return 0;
}

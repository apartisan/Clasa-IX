#include <iostream>
using namespace std;
int main(){
    long int x,y,n;
    cin>>x>>y;
    if(y%x==0)
        n=y/x;
    else
        n=y/x+1;
    cout<<n;
    return 0;
}

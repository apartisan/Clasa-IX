#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,x;
    cin>>a>>b;
    x=a-b;
    if(x>0)
        cout<<"Primul copil este mai mare cu "<<x<<" ani";
    else if(x<0)
        cout<<"Al doilea copil este mai mare cu "<<abs(x)<<" ani";
        else
            cout<<"Copiii au varste egale";

    return 0;
}

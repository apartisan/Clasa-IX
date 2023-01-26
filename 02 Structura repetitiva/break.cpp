/*

*/

#include <iostream>
using namespace std;

int main(){
    int i,s=0;
    for ( i=0; i<10; i++){
        if (i==5)
           // break;
           continue;
        s +=i;
    }
    cout<<s;
return 0;
}

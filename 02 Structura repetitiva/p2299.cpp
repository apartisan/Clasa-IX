/*

*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, nr, prod=1;
    cin>>n;
    if (n>0){
    for (int i=1; i<=n; i++){
        cin>>nr;
        prod = prod *nr;
    }
    cout << pow(prod,1.0/n);
    }
return 0;
}

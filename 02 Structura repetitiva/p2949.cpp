#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,nr;
    float marm, suma=0;
    cin>>n;
    for (int i=0; i<n;i++){
        cin>>nr;
        suma+=1.0/nr;
    }
    marm = n/suma;
    cout<< fixed<<setprecision(2)<<marm;
}

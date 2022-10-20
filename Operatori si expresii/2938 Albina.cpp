//#2938 Albina
#include <iostream>
using namespace std;

int main(){
    int celule=1;
    int zile;
    cin>> zile;
    for (int i=2; i<=zile;i++){
        celule = celule+(i-1)*6;
        //cout<<i<<" "<<celule<<'\t';
    }
    cout<<celule;
}

#include <iostream>
using namespace std;

int main(){
 int n,nr,uc, minim = 9, maxim=0;
 cin>>n;
 for (int i=1; i<=n; i++){
    cin>>nr;
    int clona = nr;
    while(nr>0){
        uc = nr%10;
        nr /= 10;
    }
    if (uc<=minim){
        minim=uc;
        if (clona>maxim)
            maxim = clona;
    }
 }
 cout <<maxim;
return 0;
}

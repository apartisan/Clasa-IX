#include <iostream>
using namespace std;
int main(){
    int n, max1=0, max2=0, max3 = 0;
    for (int i=1; i<=5;i++){
        cin>>n;
        if (n>max1)
            max1 = n;
        if (n>max2)
            max2 = n;
        if (n>max3)
            max3 = n;
    }
    cout <<max1 + max2 + max3;
}

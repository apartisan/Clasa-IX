#include <iostream>
using namespace std;
int main(){
    unsigned int n;
    float inv;
    cin>>n;
    if (n!=0)
        inv = 1.0/n; // inv = (float)1/n;
    else
        inv=0;
    cout<<inv;
}

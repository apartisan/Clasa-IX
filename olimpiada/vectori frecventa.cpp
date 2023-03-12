#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("date.in");
ofstream fout ("date.out");

int main(){
    int n,v[10];
    fin>>n;
    for(int i=1; i<=n; i++)
        fin >>v[i];
    for(int i=1; i<=n; i++)
        cout << v[i]<<" ";

}

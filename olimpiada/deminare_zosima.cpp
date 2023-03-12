#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("deminare.in.c");
ofstream fout("deminare.out");

int main()
{
    int v,l,c,m,cuant=0;
    fin>>v>>l>>c>>m;
    int j[l],maxim=0,j1,j2;
    for(int i=0; i<m; i++){
        fin>>j[i]>>j1;
    }
    j1=j[0];
    for (int i=0; i<m; i++){
        if (j[i]==j1){
            cuant++;
        }
        else{
            j1=j[i];
            cuant=0;
            cuant++;
        }
        if (cuant>maxim){
            maxim=cuant;
            j2=j[i];
        }
    }
    fout<<j2;
    return 0;
}

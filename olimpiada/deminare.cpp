#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("deminare.in.c");
ofstream fout ("deminare.out");
int teren[30][30],linii[10], coloane[10];
int main(){
    int V, L,C,M,i,j, maxim =0;
    fin>>V;
    fin>> L>>C;
    fin>> M;

    while(fin>>i>>j){
        teren[i][j] = 1;
        linii[i]=linii[i]+1;
        if (linii[i]>maxim)
            maxim = linii[i];
        coloane[j] = coloane[j]+1;
    }
    for(int i=1; i<=L;i++)
        if (linii[i]==maxim)
            cout<<i<<" " ;
    cout<<endl<<endl;
    for(int i=1; i<=L;i++){
        for(int j=1; j<=C; j++)
            cout <<teren[i][j]<<" ";
        cout<<endl;
    }

}

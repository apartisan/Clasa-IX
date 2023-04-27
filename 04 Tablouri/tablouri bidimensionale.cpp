/*

*/

#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("matrice.txt");
int main(){
int a[20][20];
int n,m;
fin>>n>>m;
//citire
for (int i=0; i<n; i++)
    for(int j=0; j<m; j++)
        fin >> a[i][j];
//afisare
for (int i=0; i<n; i++){
    for(int j=0; j<m; j++)
        if (i==j)
            cout << a[i][j] << '\t';
        else
            cout<< '\t';
    cout <<endl;
}
return 0;
}

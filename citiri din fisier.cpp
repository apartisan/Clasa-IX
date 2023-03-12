#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("date.in");
ofstream pout("p.out");
ofstream impout("imp.out");

int main(){
   int n,a[20];
   fin >>n;
   for (int i=0; i<n; i++)
        fin >>a[i];
   for (int i=0; i<n; i++)
        if (a[i]%2==0)
            pout << a[i]<<" ";
        else
            impout <<a[i]<< " ";
return 0;
}

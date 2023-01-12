#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
ofstream fout("date.out");

int main(){
 int n;
 fin>>n;
 for (int i=1;i<=n/2; i++)
    fout<< i <<" " <<n-i<<endl;

return 0;
}

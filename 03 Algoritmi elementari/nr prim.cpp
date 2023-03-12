/*

*/

#include <iostream>
using namespace std;

int main(){
  int n;
  bool prim=true;
  cin >>n;
  if (n<2)
        prim = false;
  for (int i=2; i*i<=n; i++){
    if (n%i==0)
        prim = false;
  }
  if (prim)
    cout<<"este prim"<<endl;
  else
    cout<<"nu este prim"<<endl;
return 0;
}

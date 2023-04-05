#include <iostream>
#include <fstream>
using namespace std;
ifstream f("sumepartiale.in");
int main(){
    int n, st,fin, suma;
    f >> n;

    int v[n+1], s[n+1];
    s[0] = 0;
    for (int i=1;i<=n;i++){
        f >> v[i];
        s[i] = s[i-1] + v[i];
    }
    //afisari
    for (int i=1;i<=n;i++)
        cout << v[i]<<" ";
    cout<<endl;
    for (int i=1;i<=n;i++)
        cout << s[i]<<" ";
    cout<<endl;
     f >>st>>fin;
     suma = s[fin]- s[st-1];
     cout <<suma;

return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int d = 2,  // d va fi, pe rand, fiecare factor prim din descompunere
        p;      // p va fi puterea lui d in descompunere
    // il  im partim pe n la d in mod repetat, pana cand devine 1
    while(n > 1)
    {
        // numaram de cate ori se imparte n la d. Aceasta va fi puterea lui d in descompunere
        p = 0;
        while(n % d == 0)
        {
            ++p;
            n /= d;
        }
        // daca s-a facut cel putin o impartire, afisam factorul si puterea
        if(p)
            cout << d << " " << p << endl;
        ++ d;
        //  daca d * d il depaseste pe n si n nu este 1, decidem ca n este prim,
        //  si este factor in descompunerea valorii initiale a lui n
       // if(n>1 && d * d > n){
       //     d = n; // trecem direct la n, urmatorul factor din descompunere
       // }
    }
    return 0;
}

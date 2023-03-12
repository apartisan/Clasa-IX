#include<iostream>
using namespace std;

long long int n, k, cifreDeZero = 0;

int main() {
    cin >> n >> k;

    // numaram cate zerouri sunt in n
    while (n != 1) {
        cifreDeZero++;
        n = n / 10;
    }
    // afisam prima cifra n=1
    cout << n;

    // afisam zerourile
    for (int i = 1; i <= k * cifreDeZero; i++)
        cout << 0;
    return 0;
}

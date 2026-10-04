// DISCLAIMER, REPOSITORI INI DIBUAT UNTUK KEPERLUAN TUGAS UNIVERSITAS DAN KEPERLUAN SENDIRI. ALL RIGHTS RESERVED @ccn - https://github.com/ChadOsaka

// Question are, Buat Program untuk mencari nilai P, Q, R dengan diketahui 3 varibael peubah P=2, Q=3 dan R=4. Agar isi Q + 2 ditaruh di P, isi R + 3 ditaruh di Q, isi P + 2 ditaruh di R dan isi P+Q+R ditaruh di R.
#include <iostream>
using namespace std;

int main() {
    int p, q, r;

    p = 2;
    q = 3;
    r = 4;

    p = q + 3;
    q = r + 3;
    r = p + 3;
    r = q + p;

    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    cout << "r = " << r << endl;
    
    return 0;
}
// DISCLAIMER, REPOSITORI INI DIBUAT UNTUK KEPERLUAN TUGAS UNIVERSITAS DAN KEPERLUAN SENDIRI. ALL RIGHTS RESERVED @ccn - https://github.com/ChadOsaka

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
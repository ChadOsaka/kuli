#include <iostream>
using namespace std;

int main() {
    float R, L, I;
    float pi = 3.14;

    cout << "Masukkan jari-jari bola: ";
    cin >> R;

    L = 4 * pi * R * R;
    I = (4 * pi * R * R * R) / 3;

    cout << "Luas permukaan bola = " << L << endl;
    cout << "Isi bola = " << I << endl;

    return 0;
}
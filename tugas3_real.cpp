// DISCLAIMER, REPOSITORI INI DIBUAT UNTUK KEPERLUAN TUGAS UNIVERSITAS DAN KEPERLUAN SENDIRI. ALL RIGHTS RESERVED @ccn - https://github.com/ChadOsaka

#include <iostream>
#include <iomanip> //kenapa iomanip? karna saya gamau nilai average nya jadi banyak dan bikin pusing. Jadi gw pasangin iomanip biar gw bisa control nilai averagenya atua nilai hasil
using namespace std;

int main(){
    string name_front, name_back;
    int value1, value2;
    float average; 

    cout << "Name Front: ";
    cin >> name_front;

    cout << "Name Back: ";
    cin >> name_back;

    cout << "Value 1: ";
    cin >> value1;

    cout << "Value 2: ";
    cin >> value2;

    average = (value1 + value2) / 2.0; // 2.0, karna saya mau nilainya desimal

    cout << endl;
    cout << "User name "
         << name_front << " " << name_back
         << " Have value average "
         << fixed << setprecision(2) << average << endl;

    return 0;
}
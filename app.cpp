#include <iostream>
using namespace std;

int luas, panjang, lebar;

int main ()
{
    int luas, panjang, lebar;

    //Input Panjang
    cout << "Panjang Bangunan:";
    cin >> panjang;

    //Input Lebar
    cout << "Lebar Bangunan:";
    cin >> lebar;

    //Penghitung
    luas = panjang * lebar;

    //Hasil
    cout << "Hasilnya Adalah:" << luas << endl;
}
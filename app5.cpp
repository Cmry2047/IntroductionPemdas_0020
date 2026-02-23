#include <iostream>
using namespace std;

int main()
{
    char input; 

    cout << "Press Y: ";
    cin >> input;

    // Melakukan pengecekan: apakah user menekan Y atau y
    if (input == 'Y' || input == 'y') {
        cout << "\nSelamat Datang Di TI UMY Semester 2" << endl;
        cout << "Selamat Menjalankan Ibadah Puasa" << endl;
    }

    return 0;
}
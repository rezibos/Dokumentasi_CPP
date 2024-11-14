#include <iostream>
using namespace std;

// While Loop

// While Loop
// While Loop : Perulangan while mengulang blok kode selama kondisi yang ditentukan benar
// Loops : Perulangan dapat mengeksekusi suatu blok kode selama suatu kondisi tertentu tercapai

// Contoh Kondisi yang akan di eksekusi
// i++, ++i, i--, --i, i += angka, i -= angka, i *= angka, i /= angka, i %= angka

// Syarat Loop
// () : di tuliskan dalam kurung

// Contoh
/*
    while (kondisi) {
        // aksi
    }
*/

int main()
{
    int i = 0;

    while (i < 5) {
        cout << i << "\n";

        // kondisi ini di letak dalam block kode (aksi) // di dalam
        i++;
    }

    int x = 5;

    while (x > 0) {
        cout << x << " ";

        // kondisi ini di letak dalam block kode (aksi) // di dalam
        x--;
    }
}

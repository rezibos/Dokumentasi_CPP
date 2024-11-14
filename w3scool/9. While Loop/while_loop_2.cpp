#include <iostream>
using namespace std;

// While Loop

// Do/While Loop : Perulangan do/while akan mengeksekusi blok kode setidaknya sekali

// Contoh
/*
    do {
        // kondisi ini di letak dalam block kode (aksi)
    }
    while (kondisi);
*/

int main()
{
    int i = 0;

    do {
        cout << i << "\n";

        // kondisi ini di letak dalam block kode (aksi) // di dalam
        i++;
    }
    while (i < 5);

}

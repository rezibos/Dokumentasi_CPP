#include <iostream>
using namespace std;

// For Loop

// The Foreach Loop
// Contoh
/*
    for (variabelNama : namaarray) {
        // blok kode yang akan dieksekusi   
    }
*/

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};

    for (int i : myNumbers) {
        cout << i << "\n";
    }
}

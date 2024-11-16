#include <iostream>
using namespace std;

// For Loop

// For Loop

// Contoh 
/*
    for (statement 1; statement 2; statement 3) {
        // code block to be executed
    }
*/

// Statement 1 : dieksekusi (satu kali) sebelum eksekusi blok kode
// Statement 2 : mendefinisikan kondisi untuk mengeksekusi blok kode
// Statement 3 : dieksekusi (setiap waktu) setelah blok kode dieksekusi (increment dan dicrement)

int main()
{
    // Statement 1 : menetapkan variabel sebelum loop dimulai (int i = 0)
    // Statement 2 : mendefinisikan kondisi agar loop dapat berjalan (i harus kurang dari 5). Jika kondisinya benar, loop akan mulai lagi, jika salah, loop akan berakhir
    // Statement 3 : meningkatkan nilai (i++) setiap kali blok kode dalam loop dieksekusi

    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }
}

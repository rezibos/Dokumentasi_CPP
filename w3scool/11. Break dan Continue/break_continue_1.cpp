#include <iostream>
using namespace std;

// Break/Continue
// Continue : Pernyataan continue menghentikan satu iterasi (dalam loop) jika kondisi tertentu terjadi, dan berlanjut pada iterasi berikutnya dalam loop
// Break : Pernyataan ini digunakan untuk "melompat keluar" dari pernyataan (keluar secara paksa)

int main()
{
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << "\n";
    }
}

#include <iostream>

// While Loop
// Lopping atau berulang

using namespace std;

int main()
{
    int a = 5; // ini kalau while tulis di atas inisial nya

    while (a < 10) // (syarat) // Akan berulang bila bilangan true, harus syarat bilangan boolean
    {
        // Aksi
        cout << "Berhasil ";
        cout << a << endl;
        a ++; // Aksi False
    }
    
    cout << "Selesai" << endl;
    
    return 0;
}

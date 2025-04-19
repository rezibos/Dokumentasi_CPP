#include <iostream>
using namespace std;

// Cara mengakses array menggunakan pointer

int main()
{
    int x[4] = {10, 20, 30, 40};

    // Ini Sama Saja Kayak x[1] yaitu 20 kalau mau akses anggka 10 menggunakan pointer *(x) atau *(x + 0)
    cout << "Anggka Kedua : " << *(x + 1) <<endl; // Cetak element array menggunakan pointer

    *(x + 2) = 100; // Cara mengubah isi dalam array menggunakan pointer
    cout << "Angka Ketiga : " << x[2] << endl;

    // Cara memasukan anggka kedalam array menggunakan pointer
    cout << "Masukan Anggka Keempat : ";
    cin >> *(x + 3);
    cout << "Anggka Keempat : " << x[3] << endl;
}

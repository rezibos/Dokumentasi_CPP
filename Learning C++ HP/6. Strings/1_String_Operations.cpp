#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Menetukan Ukurang Dari Strings
    string panjang = "Ayam";
    cout << "Panjang String : " << panjang.length() << endl;

    // Menggabungkan Dengan 2 Strings
    string gb1 = "Selamat ";
    string gb2 = "Pagi";

    gb1.append(gb2);
    // gb1 = gb1 + gb2;

    cout << "Ini Adalah Hasil Gabungan String : " << gb1 << endl;

    // Mendapatkan Baris Lengkap Saat Input Menggunakan Cin
    string spasi;

    cout << "Masukan Input : ";
    getline(cin, spasi);
    cout << spasi << endl;

    // Mentukar 2 String / Swaping
    string sw1 = "C++";
    string sw2 = "Python";

    cout << "Sebelum : " << sw1 << ", " << sw2 << endl;

    sw1.swap(sw2);
    cout << "Sesudah : " << sw1 << ", " << sw2 << endl; 
}

#include <iostream>
using namespace std;

// Latihan Fungsi Luas dan Kliling Persegi Panjang

// Fungsi Menghitung Luas
double hitung_luas(double p, double l){
    double luas = p * l;
    return luas;
}

// Fungsi Menghitung Keliling
double hitung_keliling(double p, double l){
    double keliling = 2 * (p + l);
    return keliling;
}

// Tampilkan Hasilnya
void tampil(double p, double l){
    cout << "Hasil Luas : " << hitung_luas(p,l) << endl;
    cout << "Hasil keliling : " << hitung_keliling(p,l) << endl;
}

int main()
{
    double panjang, lebar;

    cout << "Masukan Panjang : ";
    cin >> panjang;
    cout << "Masukan Lebar : ";
    cin >> lebar;

    tampil(panjang,lebar);

    return 0;
}

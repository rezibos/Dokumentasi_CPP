#include <iostream>
using namespace std;

// Prototype adalah fungsinya misal nya di bawah contoh

// maman = 10;

// int maman;

// ini lah kita gunakan prototype guna nya buat bisa nulis panggilan di atas / bawah

// Contoh Penulisan Prototype
double hitung_luas(double p, double l);
void printl(double x);

int main()
{
    int panjang, lebar, hasil;
    cin >> panjang;
    cin >> lebar;

    hasil = hitung_luas(panjang, lebar);
    printl(hasil);
}

double hitung_luas(double p, double l){
    return p * l;
}

void printl(double x){
    cout << x << endl;
}
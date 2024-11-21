#include <iostream>
using namespace std;

// Latihan Rekursif Fibonaci
// Kekurangan Rekursif Kinerja Yang Lambat Saat Menghitung Angka Yang Banyak Dan Memakan Memori Yang Banyak 
int fibonaci(int n);

int main()
{
    int anggka, hasil;

    cout << "Masukan Anggka : ";
    cin >> anggka;

    hasil = fibonaci(anggka);

    cout << "Nilainya Adalah : " << hasil << endl;
}

int fibonaci(int n){
    if((n == 0) || (n == 1)){
        return n;
    } else {  // Ini yang akan menjadi eksponansial           
        return fibonaci(n - 1) + fibonaci(n - 2);
    }
}
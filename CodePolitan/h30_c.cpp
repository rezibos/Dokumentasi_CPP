#include <iostream>
using namespace std;

// Latihan Rekursif - Faktorial
int faktorial(int n);

int main()
{
    int anggka, hasil;
    
    cout << "Masukan Angga : ";
    cin >> anggka;

    hasil = faktorial(anggka);
    cout << " \nHasil Dari Faktorial : " << hasil << endl;
}

int faktorial(int n){
    if(n <= 1){ // Ini supaya fungsi faktorial nya menjadi terbatas / fungsi batasan rekursif supaya engak stack overflow
        cout << n;
        return n;
    }else{ // ini adalah rekursif / penulisan rekursif
        cout << n << "*";
        return n * faktorial(n - 1);
    }
}
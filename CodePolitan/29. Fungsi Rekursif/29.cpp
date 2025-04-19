#include <iostream>
using namespace std;

// Rekursif
// Rekursif = Recursion = pengulangan
// Rekursif adalah sebuah teknik pemrograman di mana suatu fungsi memanggil dirinya sendiri secara berulang-ulang
// Kegunaan Rekursif = Menyederhanakan pemecahan masalah yang kompleks menjadi mudah di pahami

// Finit Recursion : rekursif terbatas (akhir dari rekursif)

// Contoh Rekursif
// return fungsi * nama_fungsi(fungsi - 1);

int pangkatIterasi(int a, int b){
    int hasil = a;
    for(int i = 1; i < b; i++){
        hasil = hasil * a;
    }
    return hasil;
}

int pangkatRekursif(int a, int b){
    if(b <= 1){ // Contoh Finit Recursion
        cout << a << "^" ;
        cout << b << endl;
        return a;
    } else {  // Contoh Rekursif
        cout << a << "^" ;
        cout << b << endl;
        return a * pangkatRekursif(a,(b - 1));
    }
}

int main()
{
    int a, b;

    cout << "Masukan Anggka : ";
    cin >> a;
    cout << "Masukan Pangkat : ";
    cin >> b;
    cout << "Hasil Dari Iterasi : " << pangkatIterasi(a,b) << endl;
    cout << "Hasil Dari Rekursif : " << pangkatRekursif(a,b) << endl;
}

#include <iostream>
using namespace std;

/*
    fungsi return adalah mengembalikan nilai yang telah di tentukan
*/

int kuardrat(int x){ // fungsi kembalian
    int y;
    y = x * x;
    return y;
}

int tambah(int a, int b){
    int c;
    c = a + b;
    return c;
}

int main()
{   
    int input, hasil, a, b, hasil2;
    cout << "Masukan Angka : ";
    cin >> input;

    hasil = kuardrat(input);

    cout << "Hasil Kuardrat : " << hasil << endl;

    cout << "Masukan Angka 1 : ";
    cin >> a;
    cout << "Masukan Angka 2 : ";
    cin >> b;

    hasil2 = tambah(a,b);

    cout << "Hasil Penjumlahan : " << hasil2 << endl;

    return 0;
}

#include <iostream>
using namespace std;

/*
    tipe data void
*/

// reporter adalalah melaporkan kembalian
int kuardrat(int x){ // fungsi kembalian
    int y;
    y = x * x;
    return y;
}

// worker adalah menjalankan tanpa ada kembalian
void tampilkan(int k){
    cout << "Hasil Kuardrat : " << k << endl;
}

// Atau bisa juga

// void tampilkan(){
//     int input
//     cout << "Hasil Kuardrat : " << input << endl;
// }


int main()
{   
    int input, hasil;
    cout << "Masukan Angka : ";
    cin >> input;

    hasil = kuardrat(input); // return cara panggil
    tampilkan (hasil); // void cara panggil

    return 0;
}

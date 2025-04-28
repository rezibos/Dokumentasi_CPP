#include <iostream>
using namespace std;

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers);

    /*
        kenapa hasih nya 20 bukan 5 karena disini kita menggunakan tipe data int jadi 
        sizeof ini dia menghitung byte dari masing masing tipe data makanya hasil nya bisa 20
        kerena byte int ini 4, 4x5 jadi nya 20.

        maka jadinya kalau mau tau jumlah spesifik dari array gimana kita harus membaginya enggak anggka
        perbytenya gimana caranya sizeof(myNumbers[0]) ini maksudnya mabil satuan byte nya hasilnya 4

        sizeof(myNumbers) / sizeof(myNumbers[0]) tinggal buat seperti ini lalu entar hasil nya sesuai dengan jumlah
        data yang ada di array
    */
}

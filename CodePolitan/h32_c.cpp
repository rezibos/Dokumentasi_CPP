#include <iostream>
using namespace std;

// Pointer 
// Kegunaan Pointer : memudahkan memanace memory  atau untuk mengakses alamat yang kita mau pakai
// Pointer itu adalah alamat yang bisa kita pakai untuk menarok Variabel 

// Kita tidak bisa merubah nilai a dengan memanggil addressnya saja seperti ( &nama_fungsi ) gini aja, kita harus deklarasikan seperti ini int ( *nama_fungsi = &nama_fungsi ) baru kita tinggal panggil nama fungsinya aja

// &nama_fungsi : buat menngetahui alamat atau address
// *nama_fungsi : (ini buat alamat di deklarasikan) dan (bisa di panggil dengan memanggil nama_fungsi) dan (bisa merubah isi dari alamat itu dengan memanggil nama_fungsi)
// nullptr : artinya kita mendeklarasikan sebuah pointer tapi isinya kosong atau tidak ada isi. ( adders yang masih bleng )
// dereferencing : adalah menggambil data dari sebuah pointer

// *nama_fungsi : buat ngambildata
// namafungsi = &a : buat mengetahui alamat / address

int main()
{
    // Ini int a mempunyai nilai atau address(alamat)
    int a = 5;

    // Pointer
    int *ayam = nullptr;
    ayam = &a;

    cout << "Nilai A adalah : " << a << endl;
    cout << "Alamat Dari Nilai A adalah : " << ayam << endl;

    // Dereferencing
    a = 10;
    cout << "Mengambil Data Dari Nilai A : " << *ayam << endl;

}

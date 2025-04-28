#include <iostream>
#include <cstring>
using namespace std;

// Menambahkan Salinan Menggunakan Cstring

int main()
{
    char str1[] = "C++ ";
    char str2[] = "is fun.";

    // Artinya Tambahkan isi dari str2 ke akhir str1, dan simpan hasilnya ke dalam str1.
    // Makanya Di Panggil str1 bukan 2
    strcat(str1, str2);
    // strcat(str2, str1);

    cout << str1;
}

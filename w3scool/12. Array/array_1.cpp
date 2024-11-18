#include <iostream>
using namespace std;

// Arrays

// Array : digunakan untuk menyimpan beberapa nilai dalam satu variabel

// Contoh
// string nama_array[tentukan_jumlah_array];

// Untuk mendeklarasikan array, tentukan tipe variabel, tentukan nama array diikuti tanda kurung siku dan tentukan jumlah elemen yang harus disimpan

// Contoh
// string nama_array[tentukan_jumlah_array] = {"isi_array", "isi_array", "isi_array", "isi_array"};
// int nama_array[tentukan_jumlah_array] = {isi_array, isi_array, isi_array};

// Sekarang kita telah mendeklarasikan sebuah variabel yang menampung array berisi empat string. Untuk memasukkan nilai ke dalamnya, kita dapat menggunakan literal array - tempatkan nilai dalam daftar yang dipisahkan koma, di dalam kurung kurawal

// array 1 = 0 cara panggilnya

// The foreach Loop
// Contoh 
/*
    Setiap elemen akan disimpan sementara dalam variabelnama
    for (variabelNama : namaarray) {
        // blok kode yang akan dieksekusi   
    }
*/

int main()
{
    // Cara memangil array
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0];

    // Cara mengganti array yang sudah di tetapkan
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    cout << cars[0];
}

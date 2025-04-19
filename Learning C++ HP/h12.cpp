#include <iostream>
using namespace std;

// Kesalahan Kesalahan Menggunakan Pointer

int main()
{
    int* pc, c;

    // ERROR : Karena PC adalah alamat tetapi C bukan
    // Contoh : pc = c;
    
    // Valid : Karena kedua &C dan PC adalah alamat
    // Contoh : pc = &c;

    // ERROR : Karena &C adalah alamat tetapi *pc tidak
    // Contoh : *pc = &c;

    // Valid : Karena C dan *PC adalah nilai
    // Contoh : *pc = c;
}

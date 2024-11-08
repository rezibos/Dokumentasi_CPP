#include <iostream>
using namespace std;

// OPERATORS

// Operator Assignment

// Contoh Operator Assignment
// = : x = 5
// += : x += 3
// -= : x -= 3
// *= : x *= 3
// /= : x /= 3
// %= : x %= 3 // Untuk Sisa Bagi
// &= : x &= 3
// |= : x |= 3
// ^= : x ^= 3
// >>= : x >>= 3
// <<= : x <<= 3

// Desimal Ke Biner Untuk OR, XOR, AND
// 1 = 0001
// 2 = 0010
// 3 = 0011
// 4 = 0100
// 5 = 0101
// 6 = 0110
// 7 = 0111
// 8 = 1000
// 9 = 1001
// 10 = 1010
// 11 = 1011
// 12 = 1100
// 13 = 1101
// 14 = 1110
// 15 = 1111
// 16 = 0001 0000

// Contoh Operasi Right Shift : Memindahkan Angka Ke Kanan
// M = Mulai
// Biner 5
// 0  1  0  1
//    M  1  2
// 0  0  0  1
// di mana dari kiri ke kanan adalah bit ke-3, ke-2, ke-1, dan ke-0.
// x >>= 2; Hasil = 1

// Contoh Operator Left Shift : Memindahkan Angka Ke Kiri
// 5 << 1 menghasilkan 10 (5 * 2)
// 3 << 2 menghasilkan 12 (3 * 4)
// 1 << 3 menghasilkan 8 (1 * 8)
// X    H                     D
// X : NILAI YANG KITA DEKLARASIKAN // H : HASIL // D : HASIL KALIAN 2
// INI CONTOH HASIL KALIAN 2
// 2^1 = 2 
// 2^2 = 4
// 2^3 = 8


int main()
{
    // Contoh &= : Operasi Bitwise AND
    /*
        int x = 6;
        x &= 3;
        cout << x;
    */

   // Contoh |= : Operasi Bitwise OR
   /*
        int x = 5;
        x |= 5;
        cout << x;
   */

    // Contoh ^= : Operasi Bitwise XOR
    /*
        int x = 5;
        x ^= 1;
        cout << x;
    */

    // Contoh >>= : Operasi Right Shift 
    /*
        int x = 5;
        x >>= 2;
        cout << x;
    */

   // Contoh <<= : Operator Left Shift
   /*
        int x = 5;
        x <<= 2;
        cout << x;
   */
}

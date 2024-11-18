#include <iostream>
using namespace std;

// Array

//  Get Array Size
// Untuk mendapatkan ukuran suatu array, Anda dapat menggunakan operator sizeof()

// Mengapa hasilnya menunjukkan 20 dan bukan 5 padahal array tersebut berisi 5 elemen?
// Hal ini karena operator sizeof() mengembalikan ukuran suatu tipe dalam byte.
// Anda belajar dari bab Tipe Data bahwa tipe int biasanya berukuran 4 byte, jadi dari contoh di atas, 4 x 5 (4 byte x 5 elemen) = 20 byte

int main()
{
    // Cara Mendapatkan ukuran array
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers);

    // Cara Untuk mengetahui berapa banyak elemen yang dimiliki suatu array
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << getArrayLength;
}

#include <iostream>
using namespace std;

// Strings

// Access Strings
// Anda dapat mengakses karakter dalam string dengan merujuk ke nomor indeksnya di dalam tanda kurung siku [ ]

int main()
{
    // Contoh ini mencetak karakter pertama
    string myString = "Hello";
    cout << myString[0];

    // Contoh ini mencetak karakter terakhir dari sebuah string
    string myString = "Hello";
    cout << myString[myString.length() - 1];

    // Contoh ini mengubah nilai karakter tertentu dalam string, lihat nomor indeks, dan gunakan tanda kutip tunggal
    string myString = "Hello";
    myString[0] = 'J';
    cout << myString;

    // Contoh ini at() yang dapat digunakan untuk mengakses karakter dalam string
    cout << myString.at(0);
    cout << myString.at(1); 
    cout << myString.at(myString.length() - 1);

    myString.at(0) = 'J';
    cout << myString; 
}

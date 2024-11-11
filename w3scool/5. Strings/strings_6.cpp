#include <iostream>
using namespace std;

// Strings

// User Input Strings

// Cin

// Cin (Console Input) : igunakan untuk menerima input dari keyboard

// Cin menganggap spasi (whitespace, tab, dll) sebagai karakter penutup.
// getline() : fungsi dalam C++ yang digunakan untuk membaca satu baris teks lengkap, termasuk spasi.

int main()
{
    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
}

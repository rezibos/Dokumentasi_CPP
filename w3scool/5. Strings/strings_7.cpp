#include <iostream>
using namespace std;

// Strings 

// Style Strings
// Bagaimana string C-style dibuat dalam C++
// C++ mendukung string standar dan string C-style.

// Deklarasi C-style
// char nama[] = "nama";

int main()
{
    string greeting1 = "Hello";  // String Biasa
    char greeting2[] = "Hello";  // String C-Style (array karakter) menggunakan tipe data : char
    cout << greeting1 << "\n";
    cout << greeting2;
}

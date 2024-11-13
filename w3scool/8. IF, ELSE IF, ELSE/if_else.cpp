#include <iostream>
using namespace std;

// IF, ELSE IF, ELSE

// Short Hand If...Else (Ternary Operator) : yang dikenal sebagai operator ternary karena terdiri dari tiga operan

// Ini dapat digunakan untuk mengganti beberapa baris kode dengan satu baris

// Syntax : Cara penulisan
// variabel = (kondisi) ? ekspresiBenar : ekspresiSalah;
// string nama_fungsi = (time < 18) ? "Good day." : "Good evening.";

// Ada Tiga Operator dalam (ternary operator)
// (), ?, :

int main()
{
    int time = 20;
    string a = (time < 18) ? "Good day." : "Good evening.";
    cout << a;
}

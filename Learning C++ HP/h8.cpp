#include <iostream>
using namespace std;

// Cara mengetahui alamat dari var itu menggunakan (&)

// Apa bedanya dengan kita menyimpan dengan menggunakan variable saja tanpa pointer
// Dengan menggunakan variable saja kita hanya dapat menyimpan nilai saja
// Sedangkan dengan kita menggunakan pointer maka kita juga dapat menyimpan alamat dan dapat menghemat memori

int main()
{
    int var = 5;

    cout << "var = " << var << endl;
    cout << "alamat dari var = " << &var << endl;
}

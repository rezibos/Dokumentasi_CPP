#include <iostream>
using namespace std;

// Cara mengetahui alamat dari var itu menggunakan (&)

// Apa bedanya dengan kita menyimpan dengan menggunakan variable saja tanpa pointer
// Dengan menggunakan variable saja kita hanya dapat menyimpan nilai saja
// Sedangkan dengan kita menggunakan pointer maka kita juga dapat menyimpan alamat dan dapat menghemat memori

int main()
{
    // TODO : 1. Pengetahuan Tentang Pointer
    /*
        int var = 5;

        cout << "var = " << var << endl;
        cout << "alamat dari var = " << &var << endl;

        # Cara Terapkan Alamat Pointer Ke Variable Biasa
        int* pc, c;

        c = 5;

        pc = &c;

        cout << "Isi dari pc : " << pc << endl;
        cout << "alamat dari c : " << &c << endl;
    */

    // TODO : 2. Cara Menggunakan Pointer
    /*
        # Cara Mendapatkan Nilai Yang Ditujukan Oleh Pointer
        int* pc, c = 5;
        pc = &c;

        cout << *pc << endl;

        # Contoh Lengkap
        int *pc, c = 22;

        # Mengetahui Alamat Dan Isi Dalam C
        cout << "Address of c: " << &c << endl;
        cout << "Value of c: " << c << "\n\n";

        # Alamat C ditugaskan ke Pointer PC / PC Itu Adalah Alamat Yang Sama C
        pc = &c;
        cout << "Content in pc: " << pc << endl;
        cout << "Value stored in pc address: " << *pc << "\n\n";

        # Mengubah Nilai Jadi PC DAN C akan bernilai 11
        c = 11;
        cout << "Value stored in pc address: " << *pc << "\n\n";

        # MEngubah Nilai Menggunakan Pointer
        *pc = 2;
        cout << "Value of c: " << c;
    */
    
    // TODO : 3. Kesalahan Menggunakan Pointer
    /*
    int* pc, c;
        # ERROR : Karena PC adalah alamat tetapi C bukan
        # Contoh : pc = c;
        
        # Valid : Karena kedua &C dan PC adalah alamat
        # Contoh : pc = &c;

        # ERROR : Karena &C adalah alamat tetapi *pc tidak
        # Contoh : *pc = &c;

        # Valid : Karena C dan *PC adalah nilai
        # Contoh : *pc = c;
    */
}

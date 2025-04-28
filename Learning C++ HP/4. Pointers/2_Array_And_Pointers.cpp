#include <iostream>
using namespace std;

// ASCII

int main() {

    // TODO : 1. Program Mencetak Alamat Yang Ada Pada Array Menggunakan Pointer
    /*
        int x[3];

        for (int i = 0; i < 3; ++i) {
            cout << "&x[" << i << "] = " << &x[i + 1] << endl;
        }

        cout << "Address of array x: " << x;
    */

    // TODO : 2. Cara Lain Menggunakan Pointer Dan Array
    /*
        int x[4] = {10, 20, 30, 40};

        # Ini Sama Saja Kayak x[1] yaitu 20 kalau mau akses anggka 10 menggunakan pointer *(x) atau *(x + 0)
        cout << "Anggka Kedua : " << *(x + 1) <<endl; // Cetak element array menggunakan pointer
    
        # Cara mengubah isi dalam array menggunakan pointer
        *(x + 2) = 100; 
        cout << "Angka Ketiga : " << x[2] << endl;
    
        # Cara memasukan anggka kedalam array menggunakan pointer
        cout << "Masukan Anggka Keempat : ";
        cin >> *(x + 3);
        cout << "Anggka Keempat : " << x[3] << endl;
    */

    // TODO : 3. Type Pada Pointer
    /*
        int* ptr = new int;

        # Dangling pointer adalah pointer yang masih menunjuk ke lokasi memori yang sudah tidak valid atau sudah dibebaskan.
        # Ini Adalah Darling Pointer
        delete ptr;
        cout << ptr << endl;

        # Ini adalah langkah aman untuk menghindari akses ke dangling pointer NULL Juga yang bearti Kosong
        ptr = NULL;

        cout << ptr;
    */

}
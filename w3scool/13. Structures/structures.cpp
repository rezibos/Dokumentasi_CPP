#include <iostream>
using namespace std;

// Structures

// Structures : adalah cara untuk mengelompokkan beberapa variabel terkait ke dalam satu tempat.
// Setiap variabel dalam struktur dikenal sebagai anggota struktur
// Tidak seperti array, suatu struktur dapat berisi banyak tipe data berbeda (int, string, bool, dll.)

// Contoh 
/*
    struct {                   ( Deklarasi Struct )
        int contoh;            ( Anggota Struct )
        string contoh;         ( Anggota Struct )
    } nama_variable;           ( Nama Variable Struct )
*/


// Contoh Multiple Variables Structures Menggunakan ( , ) Koma
/*
    struct {                                ( Deklarasi Struct )
        int myNum;                          ( Anggota Struct )
        string myString;                    ( Anggota Struct )
    } myStruct1, myStruct2, myStruct3;      ( Nama Variable Struct ) Beberapa variabel struktur dipisahkan dengan koma
*/

// Contoh Named Structures ( Structur Bernama )
/*
    struct bebas { // Struktur ini diberi nama "bebas"
        int myNum;
        string myString;
    };
*/

// Normal Structures
struct {
    int myNum;
    string myString;
} myStructure;

// Multiple Variables Structures
struct {
    string brand;
    string model;
    int year;
} myCar1, myCar2;

// Named Structures
struct car {
  string brand;
  string model;
  int year;
};

int main()
{
    // Contoh Penulisan Normal Structures 
    /*
        myStructure.myNum = 1;
        myStructure.myString = "Hello World!";

        cout << myStructure.myNum << "\n";
        cout << myStructure.myString << "\n";
    */

    // Contoh Penulisan Multiple Variables Structures
    /*
        myCar1.brand = "BMW";
        myCar1.model = "X5";
        myCar1.year = 1999;

        myCar2.brand = "Ford";
        myCar2.model = "Mustang";
        myCar2.year = 1969;

        cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
        cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
     */


    // Contoh Penulisan Named Structures
    /*
        car myCar1;
        myCar1.brand = "BMW";
        myCar1.model = "X5";
        myCar1.year = 1999;

        // Create another car structure and store it in myCar2;
        car myCar2;
        myCar2.brand = "Ford";
        myCar2.model = "Mustang";
        myCar2.year = 1969;
        
        // Print the structure members
        cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
        cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
    */
}

#include <iostream>
#include <string>
using namespace std;

// Strings

// String Concatenation
// Contoh nama string + nama string
// + dan append : fungsinya dapat menggabungkan string
// " " atau ' ' : membuat spasi

int main()
{
    // Operator + : dapat digunakan di antara string untuk menambahkannya bersama-sama untuk membuat string baru
    /*
        string firstName = "John ";
        string lastName = "Doe";
        string fullName = firstName + lastName;
        cout << fullName;
    */

    // " " atau ' ' : Anda juga dapat menambahkan spasi dengan tanda kutip 
    /*
        string firstName = "John";
        string lastName = "Doe";
        string fullName = firstName + " " + lastName;
        cout << fullName;
    */

    // Fungsi append : berisi fungsi-fungsi yang dapat melakukan operasi-operasi tertentu pada string
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName;
}

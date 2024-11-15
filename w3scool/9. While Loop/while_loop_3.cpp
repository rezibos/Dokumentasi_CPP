#include <iostream>
using namespace std;

// While Loop

// Contoh : kalau modulus dia itu di bagi dua cara kali dulu baru sisa bagi lalu di tambah
/*
    revNumbers = revNumbers * 10 + numbers % 10
    = (1 * 10) + (1 % 10)
    = 10 + 1
    = 11
*/

int main() {
    int numbers = 12345;
    int revNumbers = 0;

    while (numbers) {
        revNumbers = revNumbers * 10 + numbers % 10;
        numbers /= 10;
    }

    cout << "Reversed numbers: " << revNumbers << "\n";
}

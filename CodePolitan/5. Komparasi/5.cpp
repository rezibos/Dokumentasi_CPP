#include <iostream>

// Komparasi / Membandingkan / Persamaan / bool = boolean
// 1 = true = benar
// 0 = false = salah

using namespace std;

int main()
{
    int a = 2;
    int b = 2;
    bool hasil1, hasil2;

    // sebanding ==
    hasil1 = (a == b);
    cout << "Hasilnya adalah : " << hasil1 << endl;

    // tidak sebanding !=
    hasil2 = (a != b);
    cout << "Hasilnya adalah : " << hasil2 << endl;

    // lebih dari
    hasil1 = (a > b);
    cout << "Hasilnya adalah : " << hasil1 << endl;

    // kurang dari
    hasil2 = (a < b);
    cout << "Hasilnya adalah : " << hasil2 << endl;

    // lebih dari sama dengan
    hasil1 = (a >= b);
    cout << "Hasilnya adalah : " << hasil1 << endl;

    // kurang dari sama dengan 
    hasil2 = (a <= b);
    cout << "Hasilnya adalah : " << hasil2 << endl;


    cin.get();
    return 0;
}

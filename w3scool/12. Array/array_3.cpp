#include <iostream>
using namespace std;

// Array

// Real - Life Example
/*
    for (int age : ages)

    Ini adalah perulangan berbasis rentang yang akan memeriksa setiap elemen dalam ages
    Setiap elemen akan disimpan sementara dalam variabel age
    Perulangan akan berjalan 8 kali (satu kali untuk setiap elemen)
*/

int main()
{
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 17};
    int lowestAge = ages[0];

    for (int age : ages) {
        if (lowestAge > age) {
            lowestAge = age;
        }
    }

    cout << "The lowest age is: " << lowestAge << "\n";
}

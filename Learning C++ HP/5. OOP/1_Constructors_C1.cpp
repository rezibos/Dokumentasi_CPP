#include <iostream>
using namespace std;

// Constructor initializer list gunanya jadi bisa langsung digunakan variablenya

class Car {
public:
    int gear, speed;

    // Ini disebut dengan initializer list
    /*
        🛠️ Analogi Tukang Bangunan
        Tanpa initializer list: Tukang bikin rumah dengan bata seadanya dulu (kosong), terus direnovasi lagi biar sesuai desain.

        Dengan initializer list: Tukang langsung pasang bata dan material sesuai desain dari awal. Jadi gak ada kerja dua kali!
    */
    Car() : gear(4), speed(200) {}
};

int main()
{
    Car car1;

    cout << "Gear : " << car1.gear << endl;
    cout << "Top Speed : " << car1.speed;

}

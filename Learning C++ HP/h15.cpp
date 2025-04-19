#include <iostream>
using namespace std;

// Constructor Inisilisasi jadi bisa langsung digunakan

class Car {
public:
    int gear, speed;

    Car() : gear(4), speed(200) {}
};

int main()
{
    Car car1;

    cout << "Gear : " << car1.gear << endl;
    cout << "Top Speed : " << car1.speed;

}

#include <iostream>
using namespace std;

// Constants = berarti tidak dapat diubah dan hanya dapat dibaca

int main()
{
    // Contoh Benar
    const int minutesPerHour = 60;
    cout << minutesPerHour;

    // Contoh Salah
    /*
        const int minutesPerHour;
        minutesPerHour = 60;
        out << minutesPerHour;
    */
}

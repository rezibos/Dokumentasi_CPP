#include <iostream>
using namespace std;

// Default Argument Atau Nilai Standarnya

// Fungsi Prototypenya
double volume_kubus(double p = 1, double l = 1, double t = 1);
// jadi tulisan nya harus diatas kalau pakai prototype cara penulisan nya kayak di contoh t = 1

int main()
{
    cout << "Volume kubusnya adalah : " << volume_kubus(2,5,10) << endl;
    cout << "Volume kubusnya adalah : " << volume_kubus(2,5) << endl;
    cout << "Volume kubusnya adalah : " << volume_kubus(2) << endl;
    cout << "Volume kubusnya adalah : " << volume_kubus() << endl;
}

double volume_kubus(double p, double l, double t){
    return p * l * t;
}
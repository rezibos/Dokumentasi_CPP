#include <iostream>
using namespace std;

// Overloading = menimpa
// over = diatas
// loading = menggambil

// Contoh dia bisa menggambil nama fungsi yang sama / menggunakan nama fungsi yang sama
// contoh : luas_kotak ini di panggil 3 kali dalam 1 pemograman

// Basic funcion
int luas_kotak(int pajang, int lebar){
    int luas = pajang * lebar;
    return luas;
}

// Overload function
int luas_kotak(int sisi){
    int luas = sisi * sisi;
    return luas;
}

double luas_kotak(double sisi){
    return sisi * sisi;
}

int main()
{
    cout << "luas kotak 2 x 3 : " << luas_kotak(2,3) << endl;
    cout << "luas kotak 2 x 2 : " << luas_kotak(2) << endl;
    cout << "luas kotak 2.5 x 2.5 : " << luas_kotak(2.5) << endl;
}

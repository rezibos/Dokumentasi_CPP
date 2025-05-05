#include <iostream>

// aritmatika
// oprator aritmatika + , - , * , / , % 

using namespace std;

int main(){

    int a = 7;
    int b = 2;
    float hasil;

    // penjumlahan
    hasil = a + b ;
    cout << a << " + " << b << " = " << hasil << endl;

    // pengurangan
    hasil = a - b ;
    cout << a << " - " << b << " = " << hasil << endl;

    // perkalian
    hasil = a * b ;
    cout << a << " x " << b << " = " << hasil << endl;

    // pembagian
    hasil = a / b ;
    cout << a << " : " << b << " = " << hasil << endl;

    // modulus
    // hasil = a % b ;
    // cout << a << " % " << b << " = " << hasil << endl;

    // urutan eksekusi
    hasil = (a + b) * a; // sama kayak mtk kurung dulu yang di selesaikan
    cout << hasil << endl;

    return 0;
}
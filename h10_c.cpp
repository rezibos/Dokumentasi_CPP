#include <iostream>

// Membuat kalkulator sederhana

using namespace std;

int main()
{
    float a , b , hasil;
    char ar;

    // halaman utama
    cout << "---- Selamat Datang Di Calculator Sederhana ---- \n\n";
    cout << "Masukan Nilai 1 : ";
    cin >> a;
    cout << "Masukan Operator +,-,/,* : ";
    cin >> ar;
    cout << "Masukan Nilai 2 : ";
    cin >> b;

    // Hasil
    cout << "Hasil Perhitungan Anda : ";
    cout << a << " " << ar << " " << b ;

    // Penyocokan data yang di tulis
    // pakai switch case
    switch (ar){
        case '+' :
            hasil = a + b;
            cout << " = " <<  hasil << endl;
            break;
        case '-' :
            hasil = a - b;
            cout << " = " <<  hasil << endl;
            break;
        case '/' :
            hasil = a / b;
            cout << " = " <<  hasil << endl;
            break;
        case '*' :
            hasil = a * b;
            cout << " = " <<  hasil << endl;
            break;
        default:
        cout << "Ada yang salah saat pengisian" << endl;
    }

    // Pakai if
    // if (ar == '+') {
    //     hasil = a + b;
    //     cout << " = " << hasil << endl;
    // } else if (ar == '-') {
    //     hasil = a - b;
    //     cout << " = " << hasil << endl;
    // } else if (ar == '*') {
    //     hasil = a * b;
    //     cout << " = " << hasil << endl;
    // } else if (ar == '/') {
    //     hasil = a / b;
    //     cout << " = " << hasil << endl;
    // } else {
    //     cout << "ada yang salah saat penggisian" << endl;
    // }

    cin.get();
    return 0;
}

#include <iostream>
using namespace std;

// Prototype untuk reference
void fungsi(int &);
void kuardrat(int &);

int main()
{
    int a = 5;

    cout << "Address dari a : " << &a << endl;
    cout << "Nilai dari a   : " << a << endl;

    // fungsi(a); // fungsi dengan input refrence bedanya itu kita tidak pakai bintang seperti pointer
    kuardrat(a);

    cout << "Nilai Kuardrat a : " << a << endl;
}

// Ini adalah fungsi yang kita lemparkan menggunakan refrence dari int main
void fungsi(int &b){
    b = 10;
    cout << "Address dari b : " << &b << endl;
    cout << "Nilai dari b   : " << b << endl;
}

void kuardrat(int &nilaiRef){
    nilaiRef = nilaiRef * nilaiRef;
}

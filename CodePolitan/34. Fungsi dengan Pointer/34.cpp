#include <iostream>
using namespace std;

// Cara bikin prototype dengan pointer
void fungsi(int *);
void kuardrat(int *);

int main()
{
    int a = 5;

    cout << "Address Dari A adalah : " << &a << endl;
    cout << "Nilai Dari A adalah   : " << a << endl;

    // fungsi(&a); // fungsi dengan input pointer
    kuardrat(&a);
    
    cout << "Nilai Dari A kuardrat adalah : " << a << endl;
}

// Ini adalah fungsi yang kita lemparkan menggunakan address / pointer
void fungsi(int *b){
    cout << "Address Dari A adalah : " << b << endl;
    cout << "Nilai Dari A adalah   : " << *b << endl; // menggunakan deferencing
}

void kuardrat(int *valPtr){
    *valPtr = (*valPtr) * (*valPtr);
}

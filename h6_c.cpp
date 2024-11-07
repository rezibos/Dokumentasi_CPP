#include <iostream>

//  Operator Logika ( not, and, or )

using namespace std;

int main()
{
    int a = 3;
    int b = 2;
    int hasil;

    // not
    cout << "Hasil Not \n";
    hasil = !(a == 2);
    cout << hasil << endl;


    // and : kedua nilai benar kalau dua duanya true
    cout << "Hasil And \n";
    hasil = (a == 3) and (a == 2); // true and true
    cout << hasil << endl;
    hasil = (a == 3) and (a == 4); // true and false
    cout << hasil << endl;
    hasil = (a == 4) && (a == 2); // false and true
    cout << hasil << endl;
    hasil = (a == 3) && (a == 2); // false and false
    cout << hasil << endl;


    // or : bila salah satu ada true maka nilai true
    cout << "Hasil or \n";
    hasil = (a == 3) or (a == 2); // true or true
    cout << hasil << endl;
    hasil = (a == 3) or (a == 4); // true or false
    cout << hasil << endl;
    hasil = (a == 4) || (a == 2); // false or true
    cout << hasil << endl;
    hasil = (a == 3) || (a == 2); // false or false
    cout << hasil << endl;

    cin.get();
    return 0;
}

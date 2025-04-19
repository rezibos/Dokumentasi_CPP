#include <iostream>

// Increment dan Decrement
// Preincrement = sebelum 
// Postincrement = sesudah

using namespace std;

int main()
{
    int a = 5;
    int b = 5;

    // Increment

    // Postincrement
    cout << a << endl;
    cout << a++ << endl; // a = a + 1;
    cout << a << endl << endl;

    // Preincrement
    cout << b << endl;
    cout << ++b << endl; // a = a + 1;
    cout << b << endl;

    // Decrement

    // Postincrement
    cout << a << endl;
    cout << a-- << endl; // a = a - 1;
    cout << a << endl << endl;

    // Preincrement
    cout << b << endl;
    cout << --b << endl; // a = a - 1;
    cout << b << endl;


    
    return 0;
}

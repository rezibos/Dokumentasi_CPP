#include <iostream>
using namespace std;

int main()
{
    // Variable
    int a = 5;

    cout << "Address dari a : " << &a << endl;
    cout << "nilai dari a   : " << a << endl << endl;

    // Ini adalah Reference
    int &b = a;
    cout << "Address dari b : " << &b << endl;
    cout << "nilai dari b   : " << b << endl << endl;

    b = 10;
    cout << "nilai dari a   : " << a << endl;
    cout << "nilai dari b   : " << b << endl << endl;

    a = 20;
    cout << "nilai dari a   : " << a << endl;
    cout << "nilai dari b   : " << b << endl << endl;

    cin.get();
    return 0;
}

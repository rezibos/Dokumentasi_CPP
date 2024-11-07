#include <iostream>

// Operator Assingment

using namespace std;

int main()
{
    // assigment
    int a = 10;
    
    cout << " nilai awal : " << a << endl;


    // assigment operator
    // variabel = variable operator ekpresi
    //    a     =   a        +        3
    // variabel oprator ekpresi
    //    a       +=      3
    // tidak bisa di balik seperti =+
    
    a += 3;
    cout << " ditambah 3 : " << a << endl;

    a -= 3;
    cout << " dikurang 3 : " << a << endl;

    a /= 3;
    cout << " dibagi 3 : " << a << endl;

    a *= 3;
    cout << " dikali 3 : " << a << endl;

    a %= 3;
    cout << " dimodulus 3 : " << a << endl;

    return 0;
}

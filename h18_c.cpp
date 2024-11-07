#include <iostream>

// Latihan Segitiga Siku Siku

// Pola 1
//  * 
//  *  * 
//  *  *  * 
//  *  *  *  * 
//  *  *  *  *  * 

// Pola 2
//  *  *  *  *  * 
//  *  *  *  * 
//  *  *  * 
//  *  * 
//  * 

// Pola 3
// *****
//  ****
//   ***
//    **
//     *

// Pola 4
//     *
//    **
//   ***
//  ****
// *****

using namespace std;

int main()
{
    int n;

    cout << "Masukan Pola : ";
    cin >> n;

    cout << "Pola 1\n" << endl;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    cout << "Pola 2\n" << endl;

    for (int i = 1; i <= n; i++){
        for (int j = n; j >= i; j--)
        {
            cout << " * ";
        }
        cout << endl;
    }

    cout << "Pola 3\n" << endl;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Pola 4\n" << endl;

    for (int i = 1; i <= n; i++){
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}

#include <iostream>

// Segitiga 

// Pola 5
//     *
//    ***
//   *****
//  *******
// *********

// Pola 6
// *********
//  *******
//   *****
//    ***
//     *

// Pola 7
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

using namespace std;

int main()
{
    int n;

    cout << "Masukan Anggka : ";
    cin >> n;

    cout << "Pola 5\n" << endl;

    for (int i = 1; i <= n; i++){
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= ( 2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Pola 6\n" << endl;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = n; j >= ( i * 2 - n); j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Pola 7\n" << endl;

    for (int i = 1; i <= n; i++){
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= ( 2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 2; i <= n; i++){
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = n; j >= ( i * 2 - n); j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}

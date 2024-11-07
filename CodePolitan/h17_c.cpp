#include <iostream>

// Fibonacci atau anggka + + / di tambahkan tambah

using namespace std;

int main()
{
    int f_n, f_n1, f_n2, n;

    cout << "Masukan Fibonacci N : ";
    cin >> n;

    f_n1 = 1;
    f_n2 = 0;
    cout << f_n2 << " "; 
    cout << f_n1 << " "; 
    for (int i = 0; i < n; i++)
    {
        f_n = f_n1 + f_n2; // 1
        f_n2 = f_n1; // 1
        f_n1 = f_n; // 1
        cout << f_n << " ";
    }
    
    cout << endl;
    
    return 0;
}

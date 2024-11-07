#include <iostream>

// For Loop

using namespace std;

int main()
{

    cout << "Loop 1" << endl;
        //inisial    //kondisi    //increment = mau di tambah berapa atau mau di loop berapa kali
    for (int i = 1;  i <= 10;     i++)
    {
        cout << "berhasil : " << i << endl;// aksi // statement
    }

    cout << "\n\n";
    cout << "Loop 2" << endl;
    for (int i = 1; i <= 10; i += 2)
    {
        cout << "berhasil : " << i << endl;
    }

    cout << "\n\n";
    cout << "Loop 3" << endl;
    for (int i = 13; i >= 10; i--)
    {
        cout << "berhasil : " << i << endl;
    }

    cout << "\n\n";
    cout << "Loop 4" << endl;
    int total = 0;
    for (int i = 1; i <= 10; i++, total += i) // Namanya kounpoun
    {
        cout << "berhasil : " << i << "||" << total << endl;
    }
    
    
    return 0;
}

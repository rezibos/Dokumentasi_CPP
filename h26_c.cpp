#include <iostream>
using namespace std;

// Scope Variable Global, Local, Block

// Contoh Berlaku Untuk Global Di Tulis di paling atas
int x = 10;

int ambil_global(){
    return x; // Menggambil Variable Global
}

int x_local(){
    // Contoh Berlalku Untuk Lokal di tulis di dalam {} / Didalam Fungsi
    int x = 5; // variable local scopenya x_local()
    return x;
}


int main()
{
    cout << "1. Ambil Global : " << x << endl;

    // Contoh Berlalku Untuk Lokal di tulis di dalam {} / Didalam Fungsi
    int x = 8;

    cout << "2. Ambil Local : " << x << endl;
    cout << "3. Ambil Ambil_global : " << ambil_global() << endl;
    cout << "4. Ambil Local : " << x << endl;
    cout << "5. Ambil X_local : " << x_local << endl;
    cout << "6. Ambil Local : " << x << endl;
    {
        cout << "7. Ambil Local_Block : " << x << endl;

        // Contoh Block Scope (Berguna Buat Loop)
        int x = 1; // Dia engak akan merubah karena dia di dalam if bukan di luar contoh block scope yang kayak di contoh 

        cout << "8. Ambil Local_Block : " << x << endl;

        // Dia Ambil nilai x yang paling jauh / global / ambil nilai yang di luar
        cout << "8. Ambil Ambil_global : " << ::x << endl;
    }

    cout << "9. Ambil Local : " << x << endl;
    
}

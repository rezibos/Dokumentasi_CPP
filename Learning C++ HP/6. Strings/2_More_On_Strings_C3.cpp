#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // Angganay ada 7 Tapi Jumlah Hasilnya 8 Karena Kehitung Spasinya Juga
    char str[100] = "C++ Rezi\0";

    // strlen() : mengembalikan total karakter yang ada termaksuk spasi dia bukan mengembalikan sisa array
    // Dia Juga Mengabaikan \0 Pada Akhir Kalimat
    cout << "Panjang String : " << strlen(str) << endl;
}

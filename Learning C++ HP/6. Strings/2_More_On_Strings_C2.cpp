#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str[100];

    cout << "Masukan Input : ";
    // getline(cin, str);  // ← string version
    cin.getline(str, 100); // ← untuk char array
    cout << "Masukan Hasil Input : " << str << endl;

    // Sebenarnya Ini Saya Mau Cek Apakah Dia Masuk Kedalam Array Rupanya Masuk
    // Dia Kesimpan Seperti Ini char str[] = {'C', '+', '+'};
    for(int i = 0; i < 3; i++){
        cout << str[i];
    }
}

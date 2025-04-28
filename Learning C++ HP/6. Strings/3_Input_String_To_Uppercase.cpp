#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "ABCDEFG"; 

    for(int i = 0; i < strlen(str); i++){
        str[i] = tolower(str[i]); // ← Mengubah Huruh Uppercase(Besar) Menjadi Lowercase(Kecil)
        // str[i] = toupper(str[i]); // ← Mengubah Huruh Lowercase(Kecil) Menjadi Uppercase(Besar)
    }

    cout << "Hasil: " << str << endl;
}

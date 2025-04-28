#include <iostream>
#include <string>

using namespace std;

// class tanpa constructor
class Polos 
{
    public:
        string nama;
        int NIM;
};

// class dengan constructor : akan di panggil pertama kali ketika object di buat
class Mahasiswa
{
public:
    string nama;
    string NIM;
    string jurusan;
    double IPK;

    // ini adalah constructor
    // Mahasiswa(){
        
    // }

    Mahasiswa(string InputNama, string InputNim, string InputJurusan, double InputIpk){
        Mahasiswa::nama = InputNama;
        Mahasiswa::NIM = InputNim;
        Mahasiswa::jurusan = InputJurusan;
        Mahasiswa::IPK = InputIpk;

        cout << Mahasiswa::nama << endl;
        cout << Mahasiswa::NIM << endl;
        cout << Mahasiswa::jurusan << endl;
        cout << Mahasiswa::IPK << endl;
    }
};


int main()
{
    Mahasiswa mahasiswa1 = Mahasiswa("ucup", "238723", "teknik informatika", 4.6);
    Mahasiswa mahasiswa2 = Mahasiswa("otong", "328790", "teknik perikanan", 3.6);

    // cout << mahasiswa2.nama << endl;
    // cout << mahasiswa2.NIM << endl;
    // cout << mahasiswa2.jurusan << endl;
    // cout << mahasiswa2.IPK << endl;

    return 0;
}

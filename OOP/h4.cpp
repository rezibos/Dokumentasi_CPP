#include <iostream>
using namespace std;

class Mahasiswa{
public:
    string nama;
    double IPK;

    Mahasiswa(string nama){
        Mahasiswa::nama = nama;
    }
};

int main()
{
    Mahasiswa mahasiswa1 = Mahasiswa("ucup");
    cout << mahasiswa1.nama << endl;
}

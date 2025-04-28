#include <iostream>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        int NIM;
        string jurusan;
        double IPK;
};

int main()
{
    Mahasiswa data1;
    data1.nama = "ucup";
    data1.NIM = 28371823;
    Mahasiswa data2;
    data1.nama = "otong";
    data2.nama = "domi";

    cout << "nama dari data1 : " << data1.nama << endl;
    cout << "NIM dari data1 : " << data1.NIM << endl;
    cout << "nama dari data2 : " << data2.nama << endl;

}

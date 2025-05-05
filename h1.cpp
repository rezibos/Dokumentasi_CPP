#include <iostream>
using namespace std;

class Barang{
public:
    struct DataBarang {
        string kode, nama;
        int jumlah, harga, total;
    } barang;

    Barang(string k, string n, int j, double h) {
        barang.kode = k;
        barang.nama = n;
        barang.jumlah = j;
        barang.harga = h;
        cout << "Barang Berhasil Tertambah" << endl; 
    }

    void display() {
        cout << "Kode : " << barang.kode << endl;
        cout << "Nama : " << barang.nama << endl;
        cout << "Jumlah : " << barang.jumlah << endl;
        cout << "Harga : " << barang.harga << endl;
    }

    double totalNilai() {
        barang.total = barang.jumlah * barang.harga;
        return barang.total;
    }

    ~Barang() {
        cout << "Barang Di Hapus" << endl; 
    }
};

int main()
{
    Barang b("B001", "Laptop", 1, 10000);
    b.display();
    cout << "Total Nilai: " << b.totalNilai() << endl;
}

#include <iostream>
using namespace std;

int jb;
const int tb = 1000;
string judul[tb];
int harga[tb];

void p1(){
    cout << "Judul Dan Harga Buku : " << endl;
    for(int i = 1; i <= jb; i++){
        cout << judul[i] << " : " << harga[i] << endl;
    }
}

void p2(){
    int max = 0;
    for (int i = 1; i <= jb; i++) {
        if (harga[i] > harga[max]) {
            max = i;
        }
    }
    cout << "Buku dengan harga tetinggi : \n" << judul[max] << ": " << harga[max] << endl;
}

void p3(){
    int min = 1;
    for (int i = 1; i <= jb; i++) {
        if (harga[i] < harga[min]) {
            min = i;
        }
    }
    cout << "Buku dengan harga terendah : \n" << judul[min] << ": " << harga[min] << endl;
}

void p4(){
    int total = 0;
    double rt;
    for(int i = 1; i <= jb; i++){
        total += harga[i];
    }
    rt = total / jb;

    cout << "Total Harga Semua Buku : : " << total << endl;
    cout << "Rata - Rata Harga Buku : " << rt << endl;
}

int main()
{
    int pilih;

    cout << "Masukan Jumlah Buku : ";
    cin >> jb;

    for(int i = 1; i <= jb; i++){
        cout << "Masukan Judul Buku Ke-" << i << " : ";
        cin >> judul[i];
        cout << "Masukan Harga Buku Ke-" << i << " : ";
        cin >> harga[i];
    }

    do{
        cout << "\n";
        cout << "1. Tampilkan semua judul dan harga buku" << endl;
        cout << "2. Tampilkan buku dengan harga tertinggi" << endl;
        cout << "3. Tampilkan buku dengan harga terendah" << endl;
        cout << "4. Hitung total dan rata-rata harga buku" << endl;
        cout << "5. Keluar" << endl;
        cout << " Pilih (1-5) : ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
            p1();
            break;
        case 2:
            p2();
            break;
        case 3:
            p3();
            break;
        case 4:
            p4();
            break;
        case 5:
            cout << "Keluar dari program" << endl;
            return 0;
            break;
        default:
            cout << "Anggka Tidak Di Temukan" << endl;
            break;
        }
    }while (pilih != 5);
    
    cin.get();
}
#include <iostream>

// if else pengenrtian contoh
// if = benar
// else if = jika benar
// else = salah

using namespace std;

int main()
{
    int a;
    cout << "masukan nilai = ";
    cin >> a;

    if (a == 1){
        cout << "1" << endl;
    } else if (a == 2){
        cout << "2" << endl;
    } else if (a == 3){
        cout << "3" << endl;
    } else if (a == 4){
        cout << "4" << endl;
    } else {
        cout << "salah" << endl;
    }
    
    return 0;
}

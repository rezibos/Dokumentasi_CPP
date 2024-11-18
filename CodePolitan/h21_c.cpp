#include <iostream>
#include <cstdlib>
using namespace std;

/*
    buat program dadu random
    mengunakan rand()
*/

int main()
{
    char lanjut;

    while (true)
    {
        cout << "Apakah mau lempar dadu (y/n) : ";
        cin >> lanjut;

        if(lanjut == 'y'){
            cout << 1 + (rand() % 6) << endl;
        } else if (lanjut == 'n'){
            break;
        } else {
            cout << "\nIsi yang bener dong";
        }
    }
    return 0;
}

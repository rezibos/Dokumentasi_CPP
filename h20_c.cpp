#include <iostream>
#include <cmath>

/*
    ceil(x): pembulatan ke atas
    cos(x): cosinus 
    exp(x): eksponen
    fabs(x): nilai absolut dalam float
    floor(x): pembulatan ke bawah
    fmod(x): modulus dalam float
    log(x): logaritma dengan basis natural
    log10(10): logaritma dengan basis 10
    pow(x, y): x pangkat y
    sin(x): sinus
    sqrt(x): akar kuadrat
    tan(x): tangen
*/

using namespace std;

int main()
{
    int x;

    cout << "Masukan Akar : ";
    cin >> x;

    double y = sqrt(x);
    cout << "Hasil akar adalah : " << y << endl;
    
    return 0;
}

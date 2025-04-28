#include <iostream>
using namespace std;

int main()
{
    float num_1, num_2, result;

    cout << "Masukan Nomor 1 : " << flush;
    cin >> num_1;

    cout << "Masukan Nomor 2 : " << flush;
    cin >> num_2;

    result = num_1 + num_2;

    cout << "Hasilnya adalah : " << result << endl;

    return 0;
}
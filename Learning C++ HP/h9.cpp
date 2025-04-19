#include <iostream>
using namespace std;

int main()
{
    int* pc, c;

    c = 5;

    pc = &c;

    cout << "Isi dari pc : " << pc << endl;
    cout << "alamat dari c : " << &c << endl;
}

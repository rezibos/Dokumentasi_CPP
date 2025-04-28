#include <iostream>
#include <cstring>
using namespace std;

// Cara Menyalin Cstring

int main()
{
    char str1[] = "C++";
    char str2[] = "Python";

    cout << "Sebelum Di Tukar : " << str1 << endl;

    strcpy(str1, str2);

    cout << "Sesudah Di Tukar : " << str1 << endl;
}

#include <iostream>
using namespace std;

int main() {

    int *pc, c = 22;

    cout << "Address of c: " << &c << endl;
    cout << "Value of c: " << c << "\n\n";

    pc = &c;
    cout << "Content in pc: " << pc << endl;
    cout << "Value stored in pc address: " << *pc << "\n\n";

    c = 11;
    cout << "Value stored in pc address: " << *pc << "\n\n";

    *pc = 2;
    cout << "Value of c: " << c;

    return 0;
}
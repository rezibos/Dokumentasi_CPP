#include <iostream>
using namespace std;

// ASCII

int main() {

    int x[3];

    for (int i = 0; i < 3; ++i) {
        cout << "&x[" << i << "] = " << &x[i + 1] << endl;
    }

    cout << "Address of array x: " << x;
}
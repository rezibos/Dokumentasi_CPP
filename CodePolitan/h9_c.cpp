#include <iostream>

// switch case

using namespace std;

int main()
{
    int a;

    cout << "masukan nilai = ";
    cin >> a;

    switch (a)
    {
        case 1 :
            cout << "a = 1" << endl;
            break; // supaya engak kebaca yang kebawah nya atau menggakhiri
        case 2 :
            cout << "a = 2" << endl;
        case 3 :
            cout << "a = 3" << endl;
        case 4 :
            cout << "a = 4" << endl;
        case 5 :
            cout << "a = 5" << endl;
        default :
            cout << "default" << endl;
    }

    cout << "akhir dari progmram" << endl;
    
    return 0;
}

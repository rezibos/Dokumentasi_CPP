#include <iostream>
using namespace std;

class Raja{
public:
    int a;
    int b = 2;
};

class Pangeran : public Raja{
    public:
        void kuardrat(){
            a = b * b;
            cout << "nilai a : " << a << endl;
        }
};

class Warga : public Pangeran
{
    public:
        void kurang(){
            a = b - b;
            cout << "nilai a : " << a << endl;
        }
};

int main()
{
    
    Warga clsWarga;
    
    clsWarga.kurang();
    clsWarga.kuardrat();
    clsWarga.Raja::b;
}

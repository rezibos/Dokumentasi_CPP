#include <iostream>
using namespace std;

class Raja{
protected:
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

class Warga : protected Pangeran
{
    public:
        void kurang(){
            a = b - b;

        }
};

int main()
{
    
    Warga clsWarga;
    
    clsWarga.kurang();
}

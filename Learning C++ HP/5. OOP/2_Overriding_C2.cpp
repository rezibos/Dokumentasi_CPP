#include <iostream>
using namespace std;

class Animal{
public:
    void make_sound(){
        cout << "Suara Ayam \n";
    }
};

class Dog : public Animal{
public:
    void make_sound(){
        cout << "Suara Sapi \n";
    }
};

int main()
{
    Dog d1;

    d1.make_sound();
    d1.Animal::make_sound();
}

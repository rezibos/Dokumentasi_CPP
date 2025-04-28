#include <iostream>
using namespace std;

class Animal {
private:
    int legs_count;
    friend class Dog;

public:
    Animal() : legs_count(4) {}
};

class Dog {
public:
    Animal a1;

    void leg_count() {
        cout << "Legs = " << a1.legs_count;
    }
};

int main() {
    Dog d1;
    d1.leg_count();

    return 0;
}
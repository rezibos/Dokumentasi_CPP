#include <iostream>
using namespace std;

// Function Overriding

class Animal{
public:
    void make_sound(){
        cout << "Suara Harimau" << endl;
    }
};

// Ini adalah overriding
class Dog : public Animal {};

int main()
{
    Dog d1;

    d1.make_sound();
}

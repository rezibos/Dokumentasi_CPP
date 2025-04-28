#include <iostream>
using namespace std;

// Bila if memiliki 1 pernyataan

int main()
{
    int number = 9;
    if(number > 0)
        cout << "Nilai ini positif";
    else
        cout << "Nilai ini negatif";

    int time = 20;
    string a = (time > 18) ? "Good day." : "Good evening.";
    cout << a;
}

#include <iostream>
using namespace std;

class Area {
private:
    int length, breadth;
    friend int find_area(Area);

public:
    Area() : length(8), breadth(6) {}
};

int find_area(Area d) {
    int area = d.length * d.breadth;
    return area;
}

int main() {
    Area obj;
    cout << "Area = " << find_area(obj);
}
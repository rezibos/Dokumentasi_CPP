#include <iostream>
#include <limits>

int main(){
    std::cout << "abcd" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}
#include <iostream>
#define G 9.80665


int main() {
    
    double time, x;
    std::cin >> time;

    x = (float)1/2 * G * time * time;

    std::cout << x;
    
    return 0;
}
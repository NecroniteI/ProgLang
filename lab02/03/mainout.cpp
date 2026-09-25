#include <iostream>

int main() {
    int a = 1, b = 2;
	std::cout << a << ' ' << b << std::endl;
    int c = a+ ++b;
	std::cout << "a:" << a << ' ' << "b:" << b << ' ' << "c:" << c << std::endl; 
    return 0;
}

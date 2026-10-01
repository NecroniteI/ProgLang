#include <iostream>
using namespace std;

int main() {
    int a = 10;

    decltype(a) b = 20.0;

    cout << b << endl;
    return 0;
}
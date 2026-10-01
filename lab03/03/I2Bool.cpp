#include <iostream>
using namespace std;

int main() {
    int x = 10;
    bool b = x;

    cout << b << ' ' << typeid(b).name() << endl;
    return 0;
}
#include <iostream>

using namespace std;

int cualEsMayor(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int mayor = cualEsMayor(10, 5);
    cout << mayor << endl;
    return 0;
}
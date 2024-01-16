#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> getMenorMayor(const vector<int>& arr) {
    int menor = arr[0];
    int mayor = arr[0];

    for (int numero : arr) {
        menor = (menor < numero) ? menor : numero;
        mayor = (mayor > numero) ? mayor : numero;
    }

    return {menor, mayor};
}

int main() {
    vector<int> array = {2, 5, 7, 15, -5, -100, 55};
    vector<int> numeros = getMenorMayor(array);

    for (int numero : numeros) {
        cout << numero << ' ';
    }

    cout << endl;

    return 0;
}
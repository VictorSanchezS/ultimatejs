#include <iostream>
#include <vector>

using namespace std;

/*
 * indice validar que no sea menor a cero y que el elemento exista
 * en el array
 */
string getbyIdx(const vector<int>& arr, int idx) {
    if (idx < 0 || idx >= arr.size()) {
        return "Elemento no existe";
    }
    return to_string(arr[idx]);
}

int main() {
    vector<int> array = {1, 2};
    string resultado = getbyIdx(array, 0);
    cout << resultado << endl;
    return 0;
}
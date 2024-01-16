#include <iostream>
#include <string>

using namespace std;

string nombreResolucion(int ancho, int alto) {
    if (ancho >= 7680 && alto >= 4320) {
        return "8k";
    } else if (ancho >= 3840 && alto >= 2160) {
        return "4k";
    } else if (ancho >= 2560 && alto >= 1440) {
        return "WQHD";
    } else if (ancho >= 1920 && alto >= 1080) {
        return "FHD";
    } else if (ancho >= 1280 && alto >= 720) {
        return "HD";
    } else {
        return "Resolucion Desconocida";
    }
}

int main() {
    string nombre = nombreResolucion(1925, 1085);
    cout << nombre << endl;
    return 0;
}
#include <iostream>

int main() {
    /**
     * Imprimir numeros impares
     */

    for (int i = 0; i < 10; i++) {
        if (i % 2 != 0) {
            std::cout << "Impar " << i << std::endl;
        }
    }

    return 0;
}
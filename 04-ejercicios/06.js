/**
 * Crear un algoritmo que devuelva cantidad
 * de numeros positivos de un array
 */
let array = [2, 5, 15, -5, -100, 55,50];

function cuantosPositivos(arr) {
    let contador = 0;
    for (elemento of arr){
        if (elemento > 0){
            contador++;
        }
    }
    return contador;
}

let resultado = cuantosPositivos(array);
console.log(resultado);
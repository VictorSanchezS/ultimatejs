/**
 * Crear un array de longitud N, y que sus elementos sean
 * numeros de 1 hasta N.
 */
let longitud = 7;

function crearArray(l){
    if(l <= 0){
        return [];
    }
    let arr = [];
    for (let i = 0; i < l; i++){
        arr[i] = i +1;
    }

    return arr;
}

let resultado = crearArray(longitud);

console.log(resultado);

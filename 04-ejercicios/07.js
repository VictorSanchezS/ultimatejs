/**
 * Crear un algoritmo que devuelva
 * el precio del producto
 * más impuesto
 */

function precioCompleto(precio, impuesto){
    let total = precio + (precio * impuesto);
    return total;
}

let resultado = precioCompleto(19.90, 0.15);
console.log(resultado);
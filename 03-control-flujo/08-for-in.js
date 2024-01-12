// for in se recomienda usar en clases
let user = {
    id: 1,
    name: 'Chanchito',
    age: 25,
};

for (let propiedad in user) {
    console.log(propiedad, ':', user[propiedad]);
}

// let animales = ['Chanchito', 'Dragon', 'Perro'];
// for (let indice in animales){
//     console.log(indice, animales[indice]);
// }
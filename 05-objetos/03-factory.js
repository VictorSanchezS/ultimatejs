
function crearUsuario(name, email) {
    return {
        email,
        name,
        activo: true,
        recuperarClave: function () {//funcion anonima
            console.log('Recuperando clave...');
        },
    };
}

let user1 = crearUsuario('Victor', 'victor@holamundo.io');
let user2 = crearUsuario('Manuel', 'manuel@holamundo.io');
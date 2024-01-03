#include "Criptografo.h"

Criptografo::Criptografo(string llvPub, string llvPriv)
    : llvPublica(llvPub), llvPrivada(llvPriv) {}

string Criptografo::enviar(string llvDestinatario, string mensaje) {
    // Encriptar el mensaje con la llave pública del destinatario
    string criptograma = encripta(llvDestinatario, &mensaje[0]);
    return criptograma;
}

string Criptografo::recibir(string llvRemitente, string criptograma) {
    // Desencriptar el criptograma con la llave privada propia
    string mensaje = desencripta(llvPrivada, criptograma);
    return mensaje;
}

// Para efectos de esta Prueba de Concepto
// se implementan aquí dos funciones simples que hacen un desplazamiento de 3 caracteres (una especie de cifrado César)

string Criptografo::encripta(string llv, char *mensaje) {
    string resultado = "";
    while (*mensaje) {
        resultado += char(*mensaje + 3); // Desplazamiento simple
        mensaje++;
    }
    return resultado;
}

string Criptografo::desencripta(string llv, string criptograma) {
    string resultado = "";
    for (char c : criptograma) {
        resultado += char(c - 3); // Desplazamiento inverso
    }
    return resultado;
}

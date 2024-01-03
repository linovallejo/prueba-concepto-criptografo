#include "Criptografo.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

// Lee una llave de un archivo de texto.
std::string leerLlave(const std::string& archivo, const std::string& llaveNombre) {
    std::ifstream file(archivo);
    std::string linea;
    while (std::getline(file, linea)) {
        std::istringstream is_linea(linea);
        std::string llave;
        if (std::getline(is_linea, llave, '=') && llave == llaveNombre) {
            std::string valor;
            if (std::getline(is_linea, valor)) {
                return valor;
            }
        }
    }
    return "";
}

int main() {
    std::string llavePublicaY = leerLlave("llavesX.txt", "llavePublicaY");
    std::string llavePrivadaX = leerLlave("llavesX.txt", "llavePrivadaX");

    Criptografo criptoX(llavePublicaY, llavePrivadaX);

    std::cout << "Ingrese el mensaje a encriptar: ";
    std::string mensaje;
    std::getline(std::cin, mensaje);

    std::string criptograma = criptoX.enviar(llavePublicaY, mensaje);
    std::cout << "Mensaje encriptado: " << criptograma << std::endl;

    return 0;
}

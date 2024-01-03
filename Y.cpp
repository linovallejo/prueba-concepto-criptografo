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
    std::string llavePublicaX = leerLlave("llavesY.txt", "llavePublicaX");
    std::string llavePrivadaY = leerLlave("llavesY.txt", "llavePrivadaY");

    Criptografo criptoY(llavePublicaX, llavePrivadaY);

    std::cout << "Ingrese el mensaje encriptado: ";
    std::string criptogramaRecibido;
    std::getline(std::cin, criptogramaRecibido);

    std::string mensaje = criptoY.recibir(llavePublicaX, criptogramaRecibido);
    std::cout << "Mensaje desencriptado: " << mensaje << std::endl;

    return 0;
}

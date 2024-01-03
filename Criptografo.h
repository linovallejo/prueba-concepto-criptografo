#ifndef CRIPTOGRAFO_H
#define CRIPTOGRAFO_H

#include <string>
using std::string;

class Criptografo {
public:
    Criptografo(string llvPub, string llvPriv);

    string enviar(string llvDestinatario, string mensaje);
    string recibir(string llvRemitente, string criptograma);

private:
    string llvPublica, llvPrivada;

    string encripta(string llv, char *mensaje);
    string desencripta(string llv, string criptograma);
};

#endif // CRIPTOGRAFO_H

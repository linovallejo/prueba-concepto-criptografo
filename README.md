# Prueba de Concepto Criptógrafo

La encripción de extremo a extremo es una medida de seguridad fundamental en el ámbito de la comunicación digital. Se refiere al proceso de cifrar la información de manera que solo el emisor y el receptor autorizados puedan acceder a su contenido, asegurando que nadie más, incluidos posibles intermediarios o terceros, pueda interceptar o entender la información transmitida. La importancia de la encriptación de extremo a extremo radica en la protección de la privacidad y la confidencialidad de la información en un mundo cada vez más conectado digitalmente que cobra relevancia para conservar la privacidad del usuario, protección contra intercepciones malintencionadas, seguridad en transacciones financieras y otros.

Este repositorio ejemplifica el proceso de encripción extremo a extremo (E2E) de forma que una persona X envíe un mensaje a una persona Y, de modo que X esté seguro de que sólo Y podrá leer el mensaje y Y esté seguro que sólo X pudo haber enviado el mensaje.

## Instrucciones para la ejecución

Ambos archivos comprimidos para los programas "X" y "Y" deben descomprimirse en directorios separados. 

El programa "X" lee el mensaje o texto a encriptar de la consola, y escribe el mismo ya encriptado. A su vez el programa "Y" también lee el mensaje o texto encriptado de la consola para ser desencriptado, y escribe el mismo ya desencriptado a la consola.

Para efectos de esta Prueba de Concepto se implementan dos funciones simples que hacen un desplazamiento de 3 caracteres (una especie de cifrado César).

Las llaves privadas y públicas de ambos programas "X" y "Y" se proveen en archivos de configuración en formato texto.

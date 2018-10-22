#include "Consola.h"

Consola::Consola() {
}

Entero Consola::leerEntero(std::string mensaje) {
	Entero entrada;
	this->escribir(mensaje);
	std:: cin >> entrada;
	return entrada;
}

Consola::~Consola() {
}

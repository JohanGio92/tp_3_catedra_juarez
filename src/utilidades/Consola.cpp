#include "Consola.h"

Console::Console() {
}

Entero Console::leerEntero(std::string mensaje) {
	Entero entrada;
	this->Escribir(mensaje);
	std:: cin >> entrada;
	return entrada;
}

Console::~Console() {
}

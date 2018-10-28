#include "Opcion.h"

Opcion::Opcion(std::string titulo) : titulo(titulo){
}


void Opcion::mostrarTitulo(unsigned posicion) {
	consola.escribir(toString(posicion) + titulo);
}

Opcion::~Opcion() {
}

#include "Opcion.h"

Opcion::Opcion(std::string titulo) : titulo(titulo){

}

Opcion::Opcion(std::string titulo, ListaEnlazada<FiguraGeometrica2D*>& figuras) :
		titulo(titulo), figuras(figuras) {
}

Opcion::~Opcion() {
}

void Opcion::mostrarTitulo(unsigned posicion) {
	consola.escribir(toString(posicion) + titulo);
}

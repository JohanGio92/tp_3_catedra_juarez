#include "Opcion.h"

Opcion::Opcion(std::string titulo, ListaEnlazada<FiguraGeometrica2D*> figuras) :
		titulo(titulo), figuras(figuras) {
}

Opcion::~Opcion() {
}


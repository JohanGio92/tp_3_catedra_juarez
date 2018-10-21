#include "ConstructorDeCuadrados.h"

ConstructorDeCuadrados::ConstructorDeCuadrados() {
}

FiguraGeometrica2D* ConstructorDeCuadrados::construir() {
	return new Cuadrado(5.7);
}

ConstructorDeCuadrados::~ConstructorDeCuadrados() {
}


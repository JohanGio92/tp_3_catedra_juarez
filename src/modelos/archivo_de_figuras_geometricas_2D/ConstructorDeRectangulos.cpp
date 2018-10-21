#include "ConstructorDeRectangulos.h"

ConstructorDeRectangulos::ConstructorDeRectangulos() {
}

FiguraGeometrica2D* ConstructorDeRectangulos::construir() {
	return new Rectangulo(4, 6);
}

ConstructorDeRectangulos::~ConstructorDeRectangulos() {
}


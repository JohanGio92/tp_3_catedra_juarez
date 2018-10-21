#include "ConstructorDeCirculos.h"

ConstructorDeCirculos::ConstructorDeCirculos() {
}

FiguraGeometrica2D* ConstructorDeCirculos::construir() {
	return new Circulo(5);
}

ConstructorDeCirculos::~ConstructorDeCirculos() {
}


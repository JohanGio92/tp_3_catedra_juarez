#include "FiguraGeometrica2D.h"

FiguraGeometrica2D::FiguraGeometrica2D() {
}

FiguraGeometrica2D::FiguraGeometrica2D(std::string tipoDeFigura) :
		tipoDeFigura(tipoDeFigura) {
}

void FiguraGeometrica2D::mostrar() {
	consola.escribir("Soy un " + consola.toString(tipoDeFigura) + "\n");
	consola.escribir("Superficie: " + consola.toString(this->calcularSuperficie()));
	consola.escribir("Perimetro: " + consola.toString(this->calcularPerimetro()));
}

FiguraGeometrica2D::~FiguraGeometrica2D() {
}


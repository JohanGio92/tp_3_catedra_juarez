#include "CalculadorDePerimetroMinimo.h"

CalculadorDePerimetroMinimo::CalculadorDePerimetroMinimo() :
		Opcion(". Mostar Perimetro Minimo.") {
}

void CalculadorDePerimetroMinimo::ejecutar(ListaEnlazada<FiguraGeometrica2D*>& figuras) {
	double minimo = figuras[0]->calcularPerimetro();
	for (unsigned i = 1; i < figuras.obtenerTamanio(); ++i) {
		minimo = minimo > figuras[i]->calcularPerimetro() ?
					figuras[i]->calcularPerimetro() : minimo;
	}
	consola.escribir("Perimetro Minimo: " + toString(minimo));
}

CalculadorDePerimetroMinimo::~CalculadorDePerimetroMinimo() {
}


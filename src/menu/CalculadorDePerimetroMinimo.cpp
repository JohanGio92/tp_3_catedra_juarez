#include "CalculadorDePerimetroMinimo.h"

CalculadorDePerimetroMinimo::CalculadorDePerimetroMinimo(
		ListaEnlazada<FiguraGeometrica2D*>& figuras) :
		Opcion(". Mostar Perimetro Minimo.", figuras) {
}

void CalculadorDePerimetroMinimo::ejecutar() {
	double minimo = figuras[0]->calcularPerimetro();
	for (unsigned i = 1; i < figuras.obtenerTamanio(); ++i) {
		minimo = minimo > figuras[i]->calcularPerimetro() ?
					figuras[i]->calcularPerimetro() : minimo;
	}
	consola.escribir("Perimetro Minimo: " + toString(minimo));
}

CalculadorDePerimetroMinimo::~CalculadorDePerimetroMinimo() {
}


#include "CalculadorDePerimetroMaximo.h"

CalculadorDePerimetroMaximo::CalculadorDePerimetroMaximo() :
		Opcion(". Mostrar Perimetro Maximo.") {
}

void CalculadorDePerimetroMaximo::ejecutar() {
	double maximo = figuras[0]->calcularPerimetro();
	for (unsigned i = 1; i < figuras.obtenerTamanio(); ++i) {
		maximo = maximo < figuras[i]->calcularPerimetro() ?
					figuras[i]->calcularPerimetro() : maximo;
	}
	consola.escribir("Perimetro Maximo: " + toString(maximo));
}

CalculadorDePerimetroMaximo::~CalculadorDePerimetroMaximo() {
}


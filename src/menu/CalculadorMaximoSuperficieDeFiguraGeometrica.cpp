#include "CalculadorMaximoSuperficieDeFiguraGeometrica.h"

CalculadorMaximoSuperficieDeFiguraGeometrica::CalculadorMaximoSuperficieDeFiguraGeometrica(
		ListaEnlazada<FiguraGeometrica2D*> figuras) :
		Opcion(". Mostrar Maxima Superficie.", figuras) {
}

void CalculadorMaximoSuperficieDeFiguraGeometrica::ejecutar() {
	double maximo = figuras[0]->calcularSuperficie();
	for (unsigned i = 1; i < figuras.obtenerTamanio(); ++i) {
		maximo =
				maximo < figuras[i]->calcularSuperficie() ?
						figuras[i]->calcularSuperficie() : maximo;
	}
	consola.escribir("Superficie Maxima: " + maximo);
}

CalculadorMaximoSuperficieDeFiguraGeometrica::~CalculadorMaximoSuperficieDeFiguraGeometrica() {
}


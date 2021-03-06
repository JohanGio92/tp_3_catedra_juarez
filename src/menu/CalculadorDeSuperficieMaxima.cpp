#include "CalculadorDeSuperficieMaxima.h"

CalculadorDeSuperficieMaxima::CalculadorDeSuperficieMaxima() :
		Opcion(". Mostrar Superficie Maxima.") {
}

void CalculadorDeSuperficieMaxima::ejecutar(ListaEnlazada<FiguraGeometrica2D*>& figuras) {
	double maximo = figuras[0]->calcularSuperficie();
	for (unsigned i = 1; i < figuras.obtenerTamanio(); ++i) {
		maximo = maximo < figuras[i]->calcularSuperficie() ?
				figuras[i]->calcularSuperficie() : maximo;
	}
	consola.escribir("Superficie Maxima: " + toString(maximo));
}

CalculadorDeSuperficieMaxima::~CalculadorDeSuperficieMaxima() {
}


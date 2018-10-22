#include "CalculadorDeSuperficieMaxima.h"

CalculadorDeSuperficieMaxima::CalculadorDeSuperficieMaxima(
		ListaEnlazada<FiguraGeometrica2D*>& figuras) :
		Opcion(". Mostrar Superficie Maxima.", figuras) {
}

void CalculadorDeSuperficieMaxima::ejecutar() {
	double maximo = figuras[0]->calcularSuperficie();
	for (unsigned i = 1; i < figuras.obtenerTamanio(); ++i) {
		maximo = maximo < figuras[i]->calcularSuperficie() ?
				figuras[i]->calcularSuperficie() : maximo;
	}
	consola.escribir("Superficie Maxima: " + toString(maximo));
}

CalculadorDeSuperficieMaxima::~CalculadorDeSuperficieMaxima() {
}


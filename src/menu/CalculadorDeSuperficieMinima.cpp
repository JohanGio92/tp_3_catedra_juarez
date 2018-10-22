#include "CalculadorDeSuperficieMinima.h"

CalculadorDeSuperficieMinima::CalculadorDeSuperficieMinima(
		ListaEnlazada<FiguraGeometrica2D*>& figuras) :
		Opcion(". Mostrar Superficie Minima.", figuras) {
}

void CalculadorDeSuperficieMinima::ejecutar() {
	double minimo = figuras[0]->calcularSuperficie();
	for (unsigned i = 1; i < figuras.obtenerTamanio(); ++i) {
		minimo = minimo > figuras[i]->calcularSuperficie() ?
				figuras[i]->calcularSuperficie() : minimo;
	}
	consola.escribir("Superficie Minima: " + toString(minimo));
}

CalculadorDeSuperficieMinima::~CalculadorDeSuperficieMinima() {
}


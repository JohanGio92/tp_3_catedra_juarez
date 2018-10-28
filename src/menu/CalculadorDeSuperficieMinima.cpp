#include "CalculadorDeSuperficieMinima.h"

CalculadorDeSuperficieMinima::CalculadorDeSuperficieMinima() :
		Opcion(". Mostrar Superficie Minima.") {
}

void CalculadorDeSuperficieMinima::ejecutar(ListaEnlazada<FiguraGeometrica2D*>& figuras) {
	double minimo = figuras[0]->calcularSuperficie();
	for (unsigned i = 1; i < figuras.obtenerTamanio(); ++i) {
		minimo = minimo > figuras[i]->calcularSuperficie() ?
				figuras[i]->calcularSuperficie() : minimo;
	}
	consola.escribir("Superficie Minima: " + toString(minimo));
}

CalculadorDeSuperficieMinima::~CalculadorDeSuperficieMinima() {
}


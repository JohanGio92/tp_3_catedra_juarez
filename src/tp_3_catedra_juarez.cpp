#include "modelos/figura_geometrica_2d/FiguraGeometrica2D.h"
#include "utilidades/ListaEnlazada.h"
#include <iostream>
#include "modelos/archivo_de_figuras_geometricas_2D/ArchivoDeFigurasGeometricas2D.h"


int main() {
	ArchivoDeFigurasGeometricas2D archivo;
	ListaEnlazada<FiguraGeometrica2D*> figuras;

	archivo.convertirArchivoHaciaLista(figuras);

	for (unsigned i = 0; i < figuras.obtenerTamanio(); ++i) {
		std::cout << "Superificie: " << figuras[i]->calcularSuperficie() << std::endl;
		std::cout << "Perimetro: " << figuras[i]->calcularPerimetro() << std::endl;
	}

	for (unsigned i = 0; i < figuras.obtenerTamanio(); ++i) {
		delete figuras[i];
	}


	return 0;
}

#include "ListadoDeFiguraGeometrica.h"

ListadoDeFiguraGeometrica::ListadoDeFiguraGeometrica(
		ListaEnlazada<FiguraGeometrica2D*> figuras) : Opcion(". Listar Figuras.", figuras) {
}

void ListadoDeFiguraGeometrica::ejecutar() {
	for (unsigned i = 0; i < figuras.obtenerTamanio(); ++i) {
		figuras[i]->mostrar();
		consola.escribir("-----------------------------------------------------");
	}
}

ListadoDeFiguraGeometrica::~ListadoDeFiguraGeometrica() {
}


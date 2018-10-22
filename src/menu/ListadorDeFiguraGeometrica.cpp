#include "ListadorDeFiguraGeometrica.h"

ListadorDeFiguraGeometrica::ListadorDeFiguraGeometrica(
		ListaEnlazada<FiguraGeometrica2D*>& figuras) : Opcion(". Listar Figuras.", figuras) {
}

void ListadorDeFiguraGeometrica::ejecutar() {
	for (unsigned i = 0; i < figuras.obtenerTamanio(); ++i) {
		figuras[i]->mostrar();
	}
}

ListadorDeFiguraGeometrica::~ListadorDeFiguraGeometrica() {
}


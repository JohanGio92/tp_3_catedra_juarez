#include "ListadorDeFiguraGeometrica.h"

ListadorDeFiguraGeometrica::ListadorDeFiguraGeometrica() : Opcion(". Listar Figuras.") {
}

void ListadorDeFiguraGeometrica::ejecutar(ListaEnlazada<FiguraGeometrica2D*>& figuras) {
	for (unsigned i = 0; i < figuras.obtenerTamanio(); ++i) {
		figuras[i]->mostrar();
	}
}

ListadorDeFiguraGeometrica::~ListadorDeFiguraGeometrica() {
}


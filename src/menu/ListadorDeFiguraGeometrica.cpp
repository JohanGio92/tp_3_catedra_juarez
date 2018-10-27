#include "ListadorDeFiguraGeometrica.h"

ListadorDeFiguraGeometrica::ListadorDeFiguraGeometrica() : Opcion(". Listar Figuras.") {
}

void ListadorDeFiguraGeometrica::ejecutar() {
	for (unsigned i = 0; i < figuras.obtenerTamanio(); ++i) {
		figuras[i]->mostrar();
	}
}

ListadorDeFiguraGeometrica::~ListadorDeFiguraGeometrica() {
}


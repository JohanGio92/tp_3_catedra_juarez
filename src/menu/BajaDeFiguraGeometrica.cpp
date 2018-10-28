#include "BajaDeFiguraGeometrica.h"

BajaDeFiguraGeometrica::BajaDeFiguraGeometrica() :
		Opcion(". Remover de la Lista.") {
}

void BajaDeFiguraGeometrica::ejecutar(ListaEnlazada<FiguraGeometrica2D*>& figuras) {
	int posicion = consola.leerEntero("Por favor ingresar una posicion: ");
	figuras.remover(posicion);
	consola.escribir("El elemento a sido removido con exito");
}

BajaDeFiguraGeometrica::~BajaDeFiguraGeometrica() {
}


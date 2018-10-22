#include "BajaDeFiguraGeometrica.h"

BajaDeFiguraGeometrica::BajaDeFiguraGeometrica(ListaEnlazada<FiguraGeometrica2D*> figuras) : Opcion(". Remover de la Lista.", figuras){
}

void BajaDeFiguraGeometrica::ejecutar() {
	int posicion = consola.leerEntero("Por favor ingresar una posicion: ");
	figuras.remover(posicion);
	consola.escribir("El elemento a sido removido con exito");
}

BajaDeFiguraGeometrica::~BajaDeFiguraGeometrica() {
}


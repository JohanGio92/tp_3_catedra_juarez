#include "AltaDeFiguraGeometrica.h"

AltaDeFiguraGeometrica::AltaDeFiguraGeometrica() : Opcion (". Agregar figura."){
}

void AltaDeFiguraGeometrica::ejecutar(ListaEnlazada<FiguraGeometrica2D*>& figuras) {
	figuras.agregar(new Circulo(5));
}

AltaDeFiguraGeometrica::~AltaDeFiguraGeometrica() {
}


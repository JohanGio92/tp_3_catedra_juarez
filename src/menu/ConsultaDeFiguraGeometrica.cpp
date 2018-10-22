#include "ConsultaDeFiguraGeometrica.h"

ConsultaDeFiguraGeometrica::ConsultaDeFiguraGeometrica(
		ListaEnlazada<FiguraGeometrica2D*>& figuras) :
		Opcion(". Consultar figura", figuras) {
}

void ConsultaDeFiguraGeometrica::ejecutar() {
	int posicion = consola.leerEntero("Por favor Ingresa la posicion de consulta: ");
	figuras[posicion]->mostrar();
}

ConsultaDeFiguraGeometrica::~ConsultaDeFiguraGeometrica() {
}


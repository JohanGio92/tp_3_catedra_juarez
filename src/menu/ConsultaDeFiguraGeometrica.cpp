#include "ConsultaDeFiguraGeometrica.h"

ConsultaDeFiguraGeometrica::ConsultaDeFiguraGeometrica() :
		Opcion(". Consultar figura") {
}

void ConsultaDeFiguraGeometrica::ejecutar() {
	int posicion = consola.leerEntero("Por favor Ingresa la posicion de consulta: ");
	figuras[posicion]->mostrar();
}

ConsultaDeFiguraGeometrica::~ConsultaDeFiguraGeometrica() {
}


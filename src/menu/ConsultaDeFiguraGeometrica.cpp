#include "ConsultaDeFiguraGeometrica.h"

#include "../utilidades/Consola.h"

ConsultaDeFiguraGeometrica::ConsultaDeFiguraGeometrica(
		ListaEnlazada<FiguraGeometrica2D*> figuras) :
		Opcion(". Consultar figura", figuras) {
}

void ConsultaDeFiguraGeometrica::mostrarTitulo() {
	Consola consola;
	consola.escribir(titulo);
}

void ConsultaDeFiguraGeometrica::ejecutar() {
	Consola consola;
	int posicion = consola.leerEntero("Por favor Ingresa la posicion de consulta: ");
	figuras[posicion]->mostrar();
}

ConsultaDeFiguraGeometrica::~ConsultaDeFiguraGeometrica() {
}


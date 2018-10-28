#include "Salida.h"

Salida::Salida() : Opcion(". Salir"), terminado(false){
}

void Salida::ejecutar(ListaEnlazada<FiguraGeometrica2D*>& figuras){
	terminado = true;
}

bool Salida::terminar(){
	return terminado;
}

Salida::~Salida() {
}


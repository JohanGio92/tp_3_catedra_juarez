#include "Salida.h"

Salida::Salida() : Opcion(". Salir"), terminado(false){
}

void Salida::ejecutar(){
	terminado = true;
}

bool Salida::terminar(){
	return terminado;
}

Salida::~Salida() {
}


#include "Menu.h"

const unsigned Menu::LONGITUD = 9;

Menu::Menu() {
	salida = nullptr;
	opciones = new Opcion*[LONGITUD];
	for (unsigned i = 0; i < LONGITUD; ++i) {
		opciones[i] = nullptr;
	}
	cantidad = 0;
}

void Menu::mostrar() {
	Consola consola;
	consola.separador();
	consola.escribir("\tLista Polimorfica\n");
	for (unsigned i = 0; i < LONGITUD; ++i) {
		opciones[i]->mostrarTitulo(i+1);
	}
	consola.separador();
}

void Menu::agnadir(Opcion* opcion){
	opciones[cantidad] = opcion;
	++cantidad;
}

void Menu::cerrar(){
	salida = new Salida;
	this->agnadir(salida);
}

void Menu::destruir() {
	if (*opciones != nullptr) {
		for (unsigned i = 0; i < LONGITUD; ++i) {
			delete opciones[i];
		}
		delete[] opciones;
	}
}

bool Menu::terminado(){
	return salida->terminar();
}

Opcion* Menu::irOpcion(unsigned posicion) {
	return opciones[posicion];
}

bool Menu::estaEnElRango(unsigned posicion) {
	return 1 <= posicion && posicion <= LONGITUD;
}

unsigned Menu::leerPosicion() {
	Consola consola;
	unsigned posicion;
	do {
		posicion = (unsigned)consola.leerEntero("Cual opcion? [1," + toString(LONGITUD) + "]");
		consola.separador();
	} while (!estaEnElRango(posicion));
	return posicion - 1;
}

Menu::~Menu() {
	destruir();
}


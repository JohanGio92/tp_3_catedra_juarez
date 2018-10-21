
#ifndef UTILIDADES_LISTAENLAZADA_H_
#define UTILIDADES_LISTAENLAZADA_H_

#include "Nodo.h"
#include <cassert>

template <class T>
class ListaEnlazada{
private:
	Nodo<T>* primero;
	unsigned tamanio;

public:
	ListaEnlazada();
	bool estaVacio();
	void agregar(T elemento);
	void agregar(unsigned posicion, T elemento);
	Nodo<T>* obtenerNodo(unsigned posicion);
	T operator[](unsigned posicion);
	~ListaEnlazada();
private:
	bool estaEnElRango(unsigned posicion);
	void destruir(Nodo<T>* nodo);

};

template<class T>
ListaEnlazada<T>::ListaEnlazada() {
	primero = nullptr;
	tamanio = 0;
}

template<class T>
bool ListaEnlazada<T>::estaVacio(){
	return primero == nullptr;
}

template<class T>
void ListaEnlazada<T>::agregar(T elemento) {
	this->agregar(0, elemento);
}

template<class T>
void ListaEnlazada<T>::agregar(unsigned posicion, T elemento) {
	assert(this->estaEnElRango(posicion));
	if(posicion == 0){
		primero = new Nodo<T>(elemento, primero);
	} else{
		Nodo<T>* anterior = this->obtenerNodo(posicion-1);
		anterior->cambiarSiguiente(new Nodo<T>(elemento, anterior->obtenerSiguiente()));
	}
	++tamanio;
}

template<class T>
Nodo<T>* ListaEnlazada<T>::obtenerNodo(unsigned posicion) {
	Nodo<T>* iterador = primero;
	for (unsigned i = 0; i < posicion; ++i) {
		iterador = iterador->obtenerSiguiente();
	}
	return iterador;
}

template<class T>
bool ListaEnlazada<T>::estaEnElRango(unsigned posicion) {
	return 0 <= posicion && posicion < tamanio + 1;
}

template<class T>
void ListaEnlazada<T>::destruir(Nodo<T>* nodo) {
	if(nodo){
		this->destruir(nodo->obtenerSiguiente());
		delete nodo;
	}
}

template<class T>
T ListaEnlazada<T>::operator [](unsigned posicion) {
	assert(this->estaEnElRango(posicion));
	return this->obtenerNodo(posicion)->obtenerElemento();
}

template<class T>
ListaEnlazada<T>::~ListaEnlazada() {
	this->destruir(primero);
}

#endif

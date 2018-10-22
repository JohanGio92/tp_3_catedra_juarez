
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
	void remover(unsigned posicion);
	Nodo<T>* obtenerNodo(unsigned posicion);
	unsigned obtenerTamanio();
	T operator[](unsigned posicion);
	~ListaEnlazada();
private:
	bool estaEnElRango(unsigned posicion);
	void destruir(Nodo<T>* iterador);

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
inline unsigned ListaEnlazada<T>::obtenerTamanio() {
	return tamanio;
}

template<class T>
void ListaEnlazada<T>::remover(unsigned posicion) {
	assert(this->estaEnElRango(posicion));
	if((int)posicion == 0){
		Nodo<T>* posterior = primero->obtenerSiguiente();
		delete primero;
		primero = posterior;
	} else{
		Nodo<T>* anterior = this->obtenerNodo(posicion - 1);
		Nodo<T>* posterior = anterior->obtenerSiguiente();
		anterior->cambiarSiguiente(posterior->obtenerSiguiente());
		delete posterior;
	}
	--tamanio;
}

template<class T>
void ListaEnlazada<T>::destruir(Nodo<T>* iterador) {
	while (iterador != nullptr) {
		Nodo<T>* anterior = iterador;
		iterador = iterador->obtenerSiguiente();
		delete anterior;
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

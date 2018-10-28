#ifndef LISTA_H_
#define LISTA_H_

#include <stddef.h>
#include <cassert>

#include "Nodo.h"
template<class T>
class ListaEnlazada {

private:

	Nodo<T>* primero;

	unsigned int tamanio;

	Nodo<T>* cursor;

public:

	/*
	 * post: Lista vacia.
	 */
	ListaEnlazada();

	/*
	 * post: Lista que tiene los mismos elementos que otraLista.
	 *       La instancia resulta en una copia de otraLista.
	 */
	ListaEnlazada(ListaEnlazada<T>& otraLista);

	/*
	 * post: indica si la Lista tiene alg�n elemento.
	 */
	bool estaVacia();

	/*
	 * post: devuelve la cantidad de elementos que tiene la Lista.
	 */
	unsigned int obtenerTamanio();

	/*
	 * post: agrega el elemento al final de la Lista, en la posici�n:
	 *       contarElementos() + 1.
	 */
	void agregar(T elemento);

	/*
	 * pre : posici�n pertenece al intervalo: [1, contarElementos() + 1]
	 * post: agrega el elemento en la posici�n indicada.
	 *
	 */
	void agregar(T elemento, unsigned int posicion);

	/*
	 * post: agrega todos los elementos de otraLista
	 *       a partir de la posici�n contarElementos() + 1.
	 */
	void agregar(ListaEnlazada<T> &otraLista);

	/*
	 * pre : posici�n pertenece al intervalo: [1, contarElementos()]
	 * post: devuelve el elemento en la posici�n indicada.
	 */
	T obtener(unsigned int posicion);

	/*
	 * pre : posicio� pertenece al intervalo: [1, contarElementos()]
	 * post: cambia el elemento en la posici�n indicada por el
	 *       elemento dado.
	 */
	void asignar(T elemento, unsigned int posicion);

	/*
	 * pre : posici�n pertenece al intervalo: [1, contarElementos()]
	 * post: remueve de la Lista el elemento en la posici�n indicada.
	 */
	void remover(unsigned int posicion);

	/*
	 * post: deja el cursor de la Lista preparado para hacer un nuevo
	 *       recorrido sobre sus elementos.
	 */
	void iniciarCursor();

	/*
	 * pre : se ha iniciado un recorrido (invocando el m�todo
	 *       iniciarCursor()) y desde entonces no se han agregado o
	 *       removido elementos de la Lista.
	 * post: mueve el cursor y lo posiciona en el siguiente elemento
	 *       del recorrido.
	 *       El valor de retorno indica si el cursor qued� posicionado
	 *       sobre un elemento o no (en caso de que la Lista est� vac�a o
	 *       no existan m�s elementos por recorrer.)
	 */
	bool avanzarCursor();

	/*
	 * pre : el cursor est� posicionado sobre un elemento de la Lista,
	 *       (fue invocado el m�todo avanzarCursor() y devolvi� true)
	 * post: devuelve el elemento en la posici�n del cursor.
	 *
	 */
	T obtenerCursor();

	/*
	 * post: libera los recursos asociados a la Lista.
	 */
	T operator[](unsigned posicion);
	~ListaEnlazada();

private:

	/*
	 * pre : posici�n pertenece al intervalo: [1, contarElementos()]
	 * post: devuelve el nodo en la posici�n indicada.
	 */
	Nodo<T>* obtenerNodo(unsigned int posicion); // NOTA: primitiva PRIVADA
};

template<class T> ListaEnlazada<T>::ListaEnlazada() {

	this->primero = NULL;
	this->tamanio = 0;
	this->cursor = NULL;
}

template<class T> ListaEnlazada<T>::ListaEnlazada(ListaEnlazada<T>& otraLista) {

	this->primero = NULL;
	this->tamanio = 0;
	this->cursor = NULL;

	/* copia los elementos de otraLista */
	this->agregar(otraLista);
}

template<class T> bool ListaEnlazada<T>::estaVacia() {

	return (this->tamanio == 0);
}

template<class T> unsigned int ListaEnlazada<T>::obtenerTamanio() {

	return this->tamanio;
}

template<class T> void ListaEnlazada<T>::agregar(T elemento) {

	this->agregar(elemento, this->tamanio);
}

template<class T> void ListaEnlazada<T>::agregar(T elemento, unsigned int posicion) {

		this->tamanio++;
	if ((posicion >= 0) && (posicion < this->tamanio)) {

		Nodo<T>* nuevo = new Nodo<T>(elemento);

		if (posicion == 0) {

			nuevo->cambiarSiguiente(this->primero);
			this->primero = nuevo;

		} else {

			Nodo<T>* anterior = this->obtenerNodo(posicion - 1);
			nuevo->cambiarSiguiente(anterior->obtenerSiguiente());
			anterior->cambiarSiguiente(nuevo);
		}


		/* cualquier recorrido actual queda invalidado */
		this->iniciarCursor();
	}

}

template<class T> void ListaEnlazada<T>::agregar(ListaEnlazada<T> &otraLista) {

	otraLista.iniciarCursor();
	while (otraLista.avanzarCursor()) {
		this->agregar(otraLista.obtenerCursor());
	}
}

template<class T> T ListaEnlazada<T>::obtener(unsigned int posicion) {

	T elemento;

	if ((posicion >= 0) && (posicion < this->tamanio)) {

		elemento = this->obtenerNodo(posicion)->obtenerDato();
	}

	return elemento;
}

template<class T> void ListaEnlazada<T>::asignar(T elemento, unsigned int posicion) {

	if ((posicion > 0) && (posicion <= this->tamanio)) {

		this->obtenerNodo(posicion)->cambiarDato(elemento);
	}
}

template<class T> void ListaEnlazada<T>::remover(unsigned int posicion) {

	if ((posicion > 0) && (posicion <= this->tamanio)) {

		Nodo<T>* removido;

		if (posicion == 1) {

			removido = this->primero;
			this->primero = removido->obtenerSiguiente();

		} else {

			Nodo<T>* anterior = this->obtenerNodo(posicion - 1);
			removido = anterior->obtenerSiguiente();
			anterior->cambiarSiguiente(removido->obtenerSiguiente());
		}
		delete removido->obtenerDato();
		delete removido;
		this->tamanio--;

		/* cualquier recorrido actual queda invalidado */
		this->iniciarCursor();
	}
}

template<class T> void ListaEnlazada<T>::iniciarCursor() {

	this->cursor = NULL;
}

template<class T> bool ListaEnlazada<T>::avanzarCursor() {

	if (this->cursor == NULL) {

		this->cursor = this->primero;

	} else {

		this->cursor = this->cursor->obtenerSiguiente();
	}

	/* pudo avanzar si el cursor ahora apunta a un nodo */
	return (this->cursor != NULL);
}

template<class T> T ListaEnlazada<T>::obtenerCursor() {

	T elemento;

	if (this->cursor != NULL) {

		elemento = this->cursor->obtenerDato();
	}

	return elemento;
}

template<class T> ListaEnlazada<T>::~ListaEnlazada() {

	while (this->primero != NULL) {

		Nodo<T>* aBorrar = this->primero;
		this->primero = this->primero->obtenerSiguiente();

		delete aBorrar;
	}
}

template<class T>
T ListaEnlazada<T>::operator[](unsigned posicion) {
	assert(0 <= posicion && posicion < tamanio);
	return this->obtener(posicion);
}


template<class T> Nodo<T>* ListaEnlazada<T>::obtenerNodo(unsigned int posicion) {

	Nodo<T>* actual = this->primero;
	for (unsigned int i = 0; i < posicion; i++) {

		actual = actual->obtenerSiguiente();
	}

	return actual;
}

#endif /* LISTA_H_ */

#ifndef UTILIDADES_NODO_H_
#define UTILIDADES_NODO_H_

template <class T>
class Nodo{
private:
	T elemento;
	Nodo<T>* siguiente;
public:
	Nodo(T elemento);
	Nodo(T elemento, Nodo<T>* siguiente);
	T obtenerElemento();
	void cambiarElemento(T elemento);
	Nodo<T>* obtenerSiguiente();
	void cambiarSiguiente(Nodo<T>* siguiente);
	~Nodo();
};

template<class T>
Nodo<T>::Nodo(T elemento){
	this->elemento = elemento;
	siguiente = nullptr;
}

template<class T>
Nodo<T>::Nodo(T elemento, Nodo<T>* siguiente) : elemento(elemento), siguiente(siguiente){
}

template<class T>
T Nodo<T>::obtenerElemento() {
	return elemento;
}

template<class T>
void Nodo<T>::cambiarElemento(T elemento) {
	this->elemento = elemento;
}

template<class T>
Nodo<T>* Nodo<T>::obtenerSiguiente() {
	return siguiente;
}

template<class T>
void Nodo<T>::cambiarSiguiente(Nodo<T>* siguiente) {
	this->siguiente = siguiente;
}

template<class T>
Nodo<T>::~Nodo(){
}

#endif

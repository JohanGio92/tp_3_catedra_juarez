#ifndef MENU_SALIDA_H_
#define MENU_SALIDA_H_

#include "Opcion.h"

class Salida : public Opcion {
private:
	bool terminado;
public:
	Salida();
	void ejecutar(ListaEnlazada<FiguraGeometrica2D*>& figuras) override;
	bool terminar();
	virtual ~Salida();
};

#endif

#ifndef MENU_ALTADEFIGURAGEOMETRICA_H_
#define MENU_ALTADEFIGURAGEOMETRICA_H_

#include "Opcion.h"

class AltaDeFiguraGeometrica : public Opcion {
public:
	AltaDeFiguraGeometrica();
	void ejecutar(ListaEnlazada<FiguraGeometrica2D*>& figuras) override;
	virtual ~AltaDeFiguraGeometrica();
};

#endif

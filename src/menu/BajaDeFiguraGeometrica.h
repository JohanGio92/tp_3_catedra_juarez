#ifndef MENU_BAJADEFIGURAGEOMETRICA_H_
#define MENU_BAJADEFIGURAGEOMETRICA_H_

#include "Opcion.h"

class BajaDeFiguraGeometrica :public Opcion {
public:
	BajaDeFiguraGeometrica();
	void ejecutar(ListaEnlazada<FiguraGeometrica2D*>& figuras) override;
	virtual ~BajaDeFiguraGeometrica();
};

#endif

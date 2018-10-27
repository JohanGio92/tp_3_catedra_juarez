#ifndef MENU_BAJADEFIGURAGEOMETRICA_H_
#define MENU_BAJADEFIGURAGEOMETRICA_H_

#include "Opcion.h"

class BajaDeFiguraGeometrica :public Opcion {
public:
	BajaDeFiguraGeometrica();
	void ejecutar() override;
	virtual ~BajaDeFiguraGeometrica();
};

#endif

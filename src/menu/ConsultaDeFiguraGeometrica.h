#ifndef MENU_CONSULTADEFIGURAGEOMETRICA_H_
#define MENU_CONSULTADEFIGURAGEOMETRICA_H_

#include "Opcion.h"

class ConsultaDeFiguraGeometrica : public Opcion {
public:
	ConsultaDeFiguraGeometrica();
	void ejecutar(ListaEnlazada<FiguraGeometrica2D*>& figuras) override;
	virtual ~ConsultaDeFiguraGeometrica();
};

#endif

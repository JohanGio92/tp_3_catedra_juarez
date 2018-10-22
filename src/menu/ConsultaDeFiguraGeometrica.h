#ifndef MENU_CONSULTADEFIGURAGEOMETRICA_H_
#define MENU_CONSULTADEFIGURAGEOMETRICA_H_

#include "Opcion.h"

class ConsultaDeFiguraGeometrica : public Opcion {
public:
	ConsultaDeFiguraGeometrica(ListaEnlazada<FiguraGeometrica2D*> figuras);
	void mostrarTitulo() override;
	void ejecutar() override;
	virtual ~ConsultaDeFiguraGeometrica();
};

#endif

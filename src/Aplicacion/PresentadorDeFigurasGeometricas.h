#ifndef APLICACION_PRESENTADORDEFIGURASGEOMETRICAS_H_
#define APLICACION_PRESENTADORDEFIGURASGEOMETRICAS_H_

#include "../menu/Menu.h"

class PresentadorDeFigurasGeometricas {
private:
	Menu menu;
public:
	PresentadorDeFigurasGeometricas();
	void presentar();
	virtual ~PresentadorDeFigurasGeometricas();
};

#endif

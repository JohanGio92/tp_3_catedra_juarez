#ifndef APLICACION_FIGURASPOLIMORFICAS_H_
#define APLICACION_FIGURASPOLIMORFICAS_H_

#include "../menu/Menu.h"

class FigurasPolimorficas {
private:
	Menu menu;
public:
	FigurasPolimorficas();
	void comenzar();
	virtual ~FigurasPolimorficas();
};

#endif

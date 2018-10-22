#ifndef MENU_OPCION_H_
#define MENU_OPCION_H_

#include <string>

class Opcion {
private:
	std::string titulo;
public:
	Opcion(std::string titulo);
	virtual void ejecutar() = 0;
	virtual void mostrar() = 0;
	virtual ~Opcion();
};

#endif
